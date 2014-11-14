Project_JolUp
=============

졸Up(JolUp) 프로젝트는 졸업학점 계산을 위한 어플리케이션 제작 개인 프로젝트입니다.

대학에 와서도 하고싶은 분야만 파는 체질 어디 안가고 교양이나 일반 필수 과목에 흥미가 안가 학점이 x망이라 "내가 졸업 할 수 있을까?" 라는 자문과 학과 사무실에서 학부생들이 '졸업사정 (현재까지 들은 과목으로 졸업이 가능한지 확인)'을 하는 것을 보고 만들어야 겠다 생각했습니다.

최소 프로토타입까지 개발이 완료된 뒤에 git으로 소스와 ui 파일을 업로드 예정이며, 어느정도 기능 구현이 된다면 Windows와 Linux용으로 컴파일 하여 개인 블로그( http://luckyyowu.tistroy.com )를 통해 배포할 예정입니다.

해당 프로젝트는 Qt 4.8을 기반으로 하며, Linux Mint 17 (64bit)에서 개발되었습니다. 따라서 소스 파일을 컴파일 하기 위해 관련 패키지가 설치되어 있어야 하며 만약 Ubuntu 기반 OS 사용자라면 다음 명령어와 정규식으로 관련 라이브러리, 툴을 설치할 수 있습니다.

$ sudo apt-get install "^qt4-"

qt4-bin-dbg         qt4-designer        qt4-linguist-tools  qt4-default         qt4-dev-tools       qt4-qmake qt4-demos           qt4-doc             qt4-qmlviewer qt4-demos-dbg       qt4-doc-html        qt4-qtconfig

(개개의 패키지로 설치하시려면 위 패키지명을 참고하세요. Qt5를 사용하지 않은 이유는 아직 5버전에서 한글 이슈(Linux)가 남아있습니다.)

소스코드는 Vim 에디터와 qmake 만을 통해 컴파일 되었으며, GUI만 Designer를 통해 그린 뒤 함수 오버로딩을 통해 재정의 되었습니다.

개인적으로 처음하는 GUI 프로그래밍에 C++ 객체지향 개념을 익히기 위해 시작한 프로젝트이니 소스 코드가 미숙하거나 문제가 있더라도 양해바랍니다. 감사합니다.

사용하는 Framework인 Qt 4.8이 LGPL 라이센스인점을 고려, LGPL 라이센스를 걸어두었습니다. Qt에 걸린 LGPL 2.1 라이센스는 다음 링크를 참조하세요. ( http://qt-project.org/doc/qt-4.8/lgpl.html )

사실 일개 대학생이 라이센스에 대해 얼마나 잘 알겠습니까 하하핳
