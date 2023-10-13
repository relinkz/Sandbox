set(This SandboxTests)

set(Sources
    ExampleTest.cpp
    InheritedCodeTests.cpp
    ExceptionalServerTests.cpp
)

add_executable(${This} ${Sources})

target_link_libraries(${This} PUBLIC
    gtest_main
    Sandbox
)