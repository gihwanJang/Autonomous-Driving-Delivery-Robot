#/bin/bash

rosrun camera_calibration cameracalibrator.py --approximate 0.1 --size 8x6 --square 0.03 right:=/stereo/right/image_raw left:=/stereo/left/image_raw right_camere:=/stereo/right left_camera:=/stereo/left --no-service-check
