file(GLOB Main "*.h" "*.cpp")

include_directories("${PROJECT_SOURCE_DIR}/src/Domain")
include_directories("${PROJECT_SOURCE_DIR}/src/App/Model")
include_directories("${PROJECT_SOURCE_DIR}/src/App/View")
include_directories("${PROJECT_SOURCE_DIR}/src/App/Controller")

add_executable(main ${Main})

target_link_libraries(main view)
target_link_libraries(main model)
target_link_libraries(main controller)
target_link_libraries(main list)
