# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "app/CMakeFiles/latte-dock_autogen.dir/AutogenUsed.txt"
  "app/CMakeFiles/latte-dock_autogen.dir/ParseCache.txt"
  "app/latte-dock_autogen"
  "app/packageplugins/indicator/CMakeFiles/latte_packagestructure_indicator_autogen.dir/AutogenUsed.txt"
  "app/packageplugins/indicator/CMakeFiles/latte_packagestructure_indicator_autogen.dir/ParseCache.txt"
  "app/packageplugins/indicator/latte_packagestructure_indicator_autogen"
  "containment/CMakeFiles/lattecontainmentplugin_autogen.dir/AutogenUsed.txt"
  "containment/CMakeFiles/lattecontainmentplugin_autogen.dir/ParseCache.txt"
  "containment/lattecontainmentplugin_autogen"
  "containmentactions/contextmenu/CMakeFiles/plasma_containmentactions_lattecontextmenu_autogen.dir/AutogenUsed.txt"
  "containmentactions/contextmenu/CMakeFiles/plasma_containmentactions_lattecontextmenu_autogen.dir/ParseCache.txt"
  "containmentactions/contextmenu/plasma_containmentactions_lattecontextmenu_autogen"
  "declarativeimports/core/CMakeFiles/lattecoreplugin_autogen.dir/AutogenUsed.txt"
  "declarativeimports/core/CMakeFiles/lattecoreplugin_autogen.dir/ParseCache.txt"
  "declarativeimports/core/lattecoreplugin_autogen"
  "plasmoid/CMakeFiles/lattetasksplugin_autogen.dir/AutogenUsed.txt"
  "plasmoid/CMakeFiles/lattetasksplugin_autogen.dir/ParseCache.txt"
  "plasmoid/lattetasksplugin_autogen"
  )
endif()
