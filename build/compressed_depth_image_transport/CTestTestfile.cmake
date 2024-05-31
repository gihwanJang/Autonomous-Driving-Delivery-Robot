# CMake generated Testfile for 
# Source directory: /home/jetson/Self-Driving-Delivery-Robot/src/utils/image_transport_plugins/compressed_depth_image_transport
# Build directory: /home/jetson/Self-Driving-Delivery-Robot/build/compressed_depth_image_transport
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_compressed_depth_image_transport_gtest_rvl_codec_test "/home/jetson/Self-Driving-Delivery-Robot/build/compressed_depth_image_transport/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/jetson/Self-Driving-Delivery-Robot/build/compressed_depth_image_transport/test_results/compressed_depth_image_transport/gtest-rvl_codec_test.xml" "--return-code" "/home/jetson/Self-Driving-Delivery-Robot/devel/.private/compressed_depth_image_transport/lib/compressed_depth_image_transport/rvl_codec_test --gtest_output=xml:/home/jetson/Self-Driving-Delivery-Robot/build/compressed_depth_image_transport/test_results/compressed_depth_image_transport/gtest-rvl_codec_test.xml")
set_tests_properties(_ctest_compressed_depth_image_transport_gtest_rvl_codec_test PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/melodic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/melodic/share/catkin/cmake/test/gtest.cmake;98;catkin_run_tests_target;/opt/ros/melodic/share/catkin/cmake/test/gtest.cmake;37;_catkin_add_google_test;/home/jetson/Self-Driving-Delivery-Robot/src/utils/image_transport_plugins/compressed_depth_image_transport/CMakeLists.txt;50;catkin_add_gtest;/home/jetson/Self-Driving-Delivery-Robot/src/utils/image_transport_plugins/compressed_depth_image_transport/CMakeLists.txt;0;")
subdirs("gtest")
