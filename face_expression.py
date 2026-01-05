import cv2
import mediapipe as mp
import math

# -------------------------------
# Initialize MediaPipe Face Mesh
# -------------------------------
mp_face = mp.solutions.face_mesh
face_mesh = mp_face.FaceMesh(
    static_image_mode=False,
    max_num_faces=1,
    refine_landmarks=True,
    min_detection_confidence=0.7,
    min_tracking_confidence=0.7
)

cap = cv2.VideoCapture(0)

# -------------------------------
# Helper function
# -------------------------------
def distance(p1, p2):
    return math.hypot(p1.x - p2.x, p1.y - p2.y)

# -------------------------------
# Main loop
# -------------------------------
while True:
    success, frame = cap.read()
    if not success:
        break

    frame = cv2.flip(frame, 1)
    rgb = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
    result = face_mesh.process(rgb)

    expression = "Neutral 😐"

    if result.multi_face_landmarks:
        for face_landmarks in result.multi_face_landmarks:

            # -------- Expression Logic --------
            upper_lip = face_landmarks.landmark[13]
            lower_lip = face_landmarks.landmark[14]
            left_eye_top = face_landmarks.landmark[159]
            left_eye_bottom = face_landmarks.landmark[145]

            mouth_open = distance(upper_lip, lower_lip)
            eye_open = distance(left_eye_top, left_eye_bottom)

            if mouth_open > 0.04:
                expression = "Surprised 😮"
            elif mouth_open > 0.02 and eye_open > 0.015:
                expression = "Happy 😀"
            else:
                expression = "Neutral 😐"

            # -------- Draw ONLY key points --------
            h, w, _ = frame.shape
            points = [13, 14, 159, 145, 386, 374]  # lips + eyes

            for idx in points:
                lm = face_landmarks.landmark[idx]
                x, y = int(lm.x * w), int(lm.y * h)
                cv2.circle(frame, (x, y), 3, (0, 255, 0), -1)

    # -------- UI Overlay (always runs) --------
    cv2.rectangle(frame, (20, 15), (420, 80), (0, 0, 0), -1)
    cv2.putText(frame, f"Expression: {expression}",
                (30, 60),
                cv2.FONT_HERSHEY_SIMPLEX,
                1, (0, 255, 0), 2)

    cv2.imshow("Face Expression Detection", frame)

    key = cv2.waitKey(1) & 0xFF
    if key == ord('q') or key == 27:  # q or ESC
        break

# -------------------------------
# Cleanup
# -------------------------------
cap.release()
cv2.destroyAllWindows()
