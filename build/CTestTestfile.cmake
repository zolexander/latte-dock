# CMake generated Testfile for 
# Source directory: /home/zolexander/latte-dock
# Build directory: /home/zolexander/latte-dock/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(appstreamtest "/usr/bin/cmake" "-DAPPSTREAMCLI=/usr/bin/appstreamcli" "-DINSTALL_FILES=/home/zolexander/latte-dock/build/install_manifest.txt" "-P" "/usr/share/ECM/kde-modules/appstreamtest.cmake")
set_tests_properties(appstreamtest PROPERTIES  _BACKTRACE_TRIPLES "/usr/share/ECM/kde-modules/KDECMakeSettings.cmake;173;add_test;/usr/share/ECM/kde-modules/KDECMakeSettings.cmake;191;appstreamtest;/usr/share/ECM/kde-modules/KDECMakeSettings.cmake;0;;/home/zolexander/latte-dock/CMakeLists.txt;32;include;/home/zolexander/latte-dock/CMakeLists.txt;0;")
subdirs("declarativeimports")
subdirs("indicators")
subdirs("app")
subdirs("containmentactions")
subdirs("containment")
subdirs("icons")
subdirs("plasmoid")
subdirs("shell")
