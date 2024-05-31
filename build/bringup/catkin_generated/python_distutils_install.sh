#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/jetson/Self-Driving-Delivery-Robot/src/bringup"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/jetson/Self-Driving-Delivery-Robot/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/jetson/Self-Driving-Delivery-Robot/install/lib/python2.7/dist-packages:/home/jetson/Self-Driving-Delivery-Robot/build/bringup/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/jetson/Self-Driving-Delivery-Robot/build/bringup" \
    "/usr/bin/python2" \
    "/home/jetson/Self-Driving-Delivery-Robot/src/bringup/setup.py" \
     \
    build --build-base "/home/jetson/Self-Driving-Delivery-Robot/build/bringup" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/jetson/Self-Driving-Delivery-Robot/install" --install-scripts="/home/jetson/Self-Driving-Delivery-Robot/install/bin"
