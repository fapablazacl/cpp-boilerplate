
find_package(Boost REQUIRED COMPONENTS system filesystem)

set (target "cpp-boilerplate-app")

set (sources 
    "src/main.cpp"
)

add_executable(${target} ${sources})
target_include_directories(${target} PRIVATE ${Boost_INCLUDE_DIR})
target_link_libraries(${target} PRIVATE ${Boost_LIBRARIES})
