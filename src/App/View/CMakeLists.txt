file(GLOB View "*.h" "*.cpp")

include_directories("${PROJECT_SOURCE_DIR}/src/App/Model")

add_library(view ${View})