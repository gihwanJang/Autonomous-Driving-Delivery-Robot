# CMake generated Testfile for 
# Source directory: /home/jetson/Self-Driving-Delivery-Robot/src/utils/image_pipeline/camera_calibration
# Build directory: /home/jetson/Self-Driving-Delivery-Robot/build/camera_calibration
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_camera_calibration_nosetests_test.directed.py "/home/jetson/Self-Driving-Delivery-Robot/build/camera_calibration/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/jetson/Self-Driving-Delivery-Robot/build/camera_calibration/test_results/camera_calibration/nosetests-test.directed.py.xml" "--return-code" "\"/usr/local/bin/cmake\" -E make_directory /home/jetson/Self-Driving-Delivery-Robot/build/camera_calibration/test_results/camera_calibration" "/usr/bin/nosetests-2.7 -P --process-timeout=60 /home/jetson/Self-Driving-Delivery-Robot/src/utils/image_pipeline/camera_calibration/test/directed.py --with-xunit --xunit-file=/home/jetson/Self-Driving-Delivery-Robot/build/camera_calibration/test_results/camera_calibration/nosetests-test.directed.py.xml")
set_tests_properties(_ctest_camera_calibration_nosetests_test.directed.py PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/melodic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/melodic/share/catkin/cmake/test/nosetests.cmake;83;catkin_run_tests_target;/home/jetson/Self-Driving-Delivery-Robot/src/utils/image_pipeline/camera_calibration/CMakeLists.txt;11;catkin_add_nosetests;/home/jetson/Self-Driving-Delivery-Robot/src/utils/image_pipeline/camera_calibration/CMakeLists.txt;0;")
add_test(_ctest_camera_calibration_nosetests_test.multiple_boards.py "/home/jetson/Self-Driving-Delivery-Robot/build/camera_calibration/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/jetson/Self-Driving-Delivery-Robot/build/camera_calibration/test_results/camera_calibration/nosetests-test.multiple_boards.py.xml" "--return-code" "\"/usr/local/bin/cmake\" -E make_directory /home/jetson/Self-Driving-Delivery-Robot/build/camera_calibration/test_results/camera_calibration" "/usr/bin/nosetests-2.7 -P --process-timeout=60 /home/jetson/Self-Driving-Delivery-Robot/src/utils/image_pipeline/camera_calibration/test/multiple_boards.py --with-xunit --xunit-file=/home/jetson/Self-Driving-Delivery-Robot/build/camera_calibration/test_results/camera_calibration/nosetests-test.multiple_boards.py.xml")
set_tests_properties(_ctest_camera_calibration_nosetests_test.multiple_boards.py PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/melodic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/melodic/share/catkin/cmake/test/nosetests.cmake;83;catkin_run_tests_target;/home/jetson/Self-Driving-Delivery-Robot/src/utils/image_pipeline/camera_calibration/CMakeLists.txt;24;catkin_add_nosetests;/home/jetson/Self-Driving-Delivery-Robot/src/utils/image_pipeline/camera_calibration/CMakeLists.txt;0;")
subdirs("gtest")
