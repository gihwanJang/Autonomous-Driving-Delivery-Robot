# CMake generated Testfile for 
# Source directory: /home/jetson/Self-Driving-Delivery-Robot/src/utils/gps_src/nmea_navsat_driver
# Build directory: /home/jetson/Self-Driving-Delivery-Robot/build/nmea_navsat_driver
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_nmea_navsat_driver_roslint_package "/home/jetson/Self-Driving-Delivery-Robot/build/nmea_navsat_driver/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/jetson/Self-Driving-Delivery-Robot/build/nmea_navsat_driver/test_results/nmea_navsat_driver/roslint-nmea_navsat_driver.xml" "--working-dir" "/home/jetson/Self-Driving-Delivery-Robot/build/nmea_navsat_driver" "--return-code" "/opt/ros/melodic/share/roslint/cmake/../../../lib/roslint/test_wrapper /home/jetson/Self-Driving-Delivery-Robot/build/nmea_navsat_driver/test_results/nmea_navsat_driver/roslint-nmea_navsat_driver.xml make roslint_nmea_navsat_driver")
set_tests_properties(_ctest_nmea_navsat_driver_roslint_package PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/melodic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/melodic/share/roslint/cmake/roslint-extras.cmake;67;catkin_run_tests_target;/home/jetson/Self-Driving-Delivery-Robot/src/utils/gps_src/nmea_navsat_driver/CMakeLists.txt;35;roslint_add_test;/home/jetson/Self-Driving-Delivery-Robot/src/utils/gps_src/nmea_navsat_driver/CMakeLists.txt;0;")
subdirs("gtest")
