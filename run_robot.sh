#!/bin/bash

nohup roslaunch bringup bringup.launch > bringup.log &
nohup ./src/rosboard/run > rosboard.log &
