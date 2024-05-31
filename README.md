# Autonomous delivery robots using image processing
영상처리를 활용한 자율주행 배달로봇

### 🗂️ 프로젝트 소개
카메라와 2차원 LIDAR 센서를 활용하여 목적지까지 자율주행을 진행합니다. 본 프로젝트에서는 자율주행을 진행하는 배달로봇, 관리를 위한 매장용 WEB, 구매자를 위한 주문 APP이 포함됩니다.
<br>

### 📆 개발 기간
* 2022년 11월 1일 ~ 개발중

#### 🙋🏻‍♂️ 멤버 구성
 - 장성용(팀장): 프로젝트 설계, 개발환경 구축, H/W 모듈 개발
 - [정영준](https://github.com/JeongYeongJoon): Swift를 이용한 소비자 주문 App 개발
 - [이아휘](https://github.com/JeongYeongJoon): AI를 활용한 주행 데이터 수집 모듈 개발
 - [장기환](https://github.com/JeongYeongJoon): GPS를 이용한 주행 모듈 개발

#### 🖥️ 개발 환경
 - Robot Platform: `ROS Melodic(Ubuntu 18.04)`
 - Robot H/W: `Jetson TX2`, `Jetson Nano 4GB`, `NEO-8M GPS`, `A1-RPLIDAR`, `MPU6050 IMU Sensor`, `RS550 Motor(3EA)`, `Arduino Uno`
 - Develop Platform: `ROS Melodic(Ubuntu 18.04)`, `Mac OS 12 Ventura`, `Windows 11`
 - Service: `Swift based APP`, `Spring-boot based WEB`, `MySQL`, `Docker`

#### 🔖 주요 기능
 - 두 개의 영상데이터를 통한 데이터 생성(객체 인식, 심도 데이터, 차선 데이터)
 - GPS와 IMU를 이용한 목적지까지의 경로 생성 및 주행
 - 차선 데이터 및 객체 인식 데이터를 통한 회피 기동 수행
 - APP, WEB, 터치스크린을 통한 사용자 상호작용 진행

#### 📑 프로젝트 범위
<img width="1996" alt="연구 배경" src="https://user-images.githubusercontent.com/74158951/230705022-c38a2c2a-2ab4-46e9-880d-ab7d7d86cbdb.png">

#### 🏢 서비스 아키텍처
<img width="1991" alt="서비스 구상도" src="https://user-images.githubusercontent.com/74158951/230705024-5e05312e-a53e-4935-aedd-f9b88a3cad0a.png">
<img width="1983" alt="주행 알고리즘" src="https://user-images.githubusercontent.com/74158951/230705026-15665d01-fe2a-4733-ac62-92672f1db15e.png">

#### 📱 APP 화면
<img width="1977" alt="APP 화면" src="https://user-images.githubusercontent.com/74158951/230705042-42027b46-be4a-4c9b-ae8e-e4f317b65b23.png">

#### 🖥️ WEB 화면
<img width="1971" alt="WEB 설계" src="https://user-images.githubusercontent.com/74158951/230705031-5336be31-def9-4d64-9f16-7c244606a644.png">

#### 💻 배달로봇 터치스크린
<img width="1967" alt="배달로봇 GUI" src="https://user-images.githubusercontent.com/74158951/230705028-edcf8869-eb16-4bbd-9efe-b555fc72dd09.png">

#### ⚒️ HW 제작 과정
<img width="779" alt="프레임 제작" src="https://user-images.githubusercontent.com/74158951/230705033-dc90f061-5210-43b6-a18b-fea1c4cea3ca.png">
<img width="1008" alt="형태" src="https://user-images.githubusercontent.com/74158951/230705034-89008dd0-f7db-40b4-be01-f6fec7aaa291.png">






<img width="874" alt="구성 화면" src="https://user-images.githubusercontent.com/74158951/230705038-3e9ef373-0292-4d74-8f5f-c3ce87f6ae0d.png">
<img width="1978" alt="데이터 모듈" src="https://user-images.githubusercontent.com/74158951/230705040-54df0d93-4612-476b-92c2-c733ee26c0b3.png">




