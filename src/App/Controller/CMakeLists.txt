file(GLOB Controller "*.h" "*.cpp")

include_directories("${PROJECT_SOURCE_DIR}/src/App/Model")
include_directories("${PROJECT_SOURCE_DIR}/src/App/View")

add_library(controller ${Controller})

target_link_libraries(controller view)