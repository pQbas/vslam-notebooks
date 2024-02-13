#pragma cling add_library_path("/usr/include")
#pragma cling add_include_path("/usr/include")

// ################################################################
// ################          PANGOLIN            ##################
// ################################################################

#pragma cling add_include_path("/usr/local/include/pangolin")
#pragma cling add_include_path("/home/pqbas/libraries/Pangolin/components/pango_core/include")
#pragma cling add_include_path("/home/pqbas/libraries/Pangolin/components/pango_display/include")
#pragma cling add_include_path("/home/pqbas/libraries/Pangolin/components/pango_geometry/include")
#pragma cling add_include_path("/home/pqbas/libraries/Pangolin/components/pango_glgeometry/include")
#pragma cling add_include_path("/home/pqbas/libraries/Pangolin/components/pango_image/include")
#pragma cling add_include_path("/home/pqbas/libraries/Pangolin/components/pango_opengl/include")
#pragma cling add_include_path("/home/pqbas/libraries/Pangolin/components/pango_packetstream/include")
#pragma cling add_include_path("/home/pqbas/libraries/Pangolin/components/pango_plot/include")
#pragma cling add_include_path("/home/pqbas/libraries/Pangolin/components/pango_python/include")
#pragma cling add_include_path("/home/pqbas/libraries/Pangolin/components/pango_scene/include")
#pragma cling add_include_path("/home/pqbas/libraries/Pangolin/components/pango_tools/include")
#pragma cling add_include_path("/home/pqbas/libraries/Pangolin/components/pango_vars/include")
#pragma cling add_include_path("/home/pqbas/libraries/Pangolin/components/pango_video/include")
#pragma cling add_include_path("/home/pqbas/libraries/Pangolin/components/pango_windowing/include")
#pragma cling add_include_path("/home/pqbas/libraries/Pangolin/components/tinyobj/include")

#pragma cling add_library_path("/home/pqbas/libraries/Pangolin/components/pango_core/include") // Libaries
#pragma cling add_library_path("/home/pqbas/libraries/Pangolin/components/pango_opengl/include") // Libaries
#pragma cling add_library_path("/home/pqbas/libraries/Pangolin/components/pango_glgeometry/include")

#pragma cling load("/home/pqbas/libraries/Pangolin/build/libpango_core.so")
#pragma cling load("/home/pqbas/libraries/Pangolin/build/libpango_display.so")
#pragma cling load("/home/pqbas/libraries/Pangolin/build/libpango_geometry.so")
#pragma cling load("/home/pqbas/libraries/Pangolin/build/libpango_glgeometry.so")
#pragma cling load("/home/pqbas/libraries/Pangolin/build/libpango_image.so")
#pragma cling load("/home/pqbas/libraries/Pangolin/build/libpango_opengl.so")
#pragma cling load("/home/pqbas/libraries/Pangolin/build/libpango_packetstream.so")
#pragma cling load("/home/pqbas/libraries/Pangolin/build/libpango_plot.so")
#pragma cling load("/home/pqbas/libraries/Pangolin/build/libpango_python.so")
#pragma cling load("/home/pqbas/libraries/Pangolin/build/libpango_scene.so")
#pragma cling load("/home/pqbas/libraries/Pangolin/build/libpango_tools.so")
#pragma cling load("/home/pqbas/libraries/Pangolin/build/libpango_vars.so")
#pragma cling load("/home/pqbas/libraries/Pangolin/build/libpango_video.so")
#pragma cling load("/home/pqbas/libraries/Pangolin/build/libpango_windowing.so")
#pragma cling load("/home/pqbas/libraries/Pangolin/build/libtinyobj.so")


#include <GL/glew.h>
#include <GL/glu.h>
#include <GL/glext.h>
#include <GL/gl.h>
