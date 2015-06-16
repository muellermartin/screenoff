cmake_minimum_required(VERSION 2.8.11)

project(screenoff)

if(MINGW)
	# Set compiler flags
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
	set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g")
endif()

# Create executable from source file(s)
add_executable(${CMAKE_PROJECT_NAME} screenoff.cpp)

install(TARGETS "${CMAKE_PROJECT_NAME}" RUNTIME DESTINATION ".")
install(FILES "README.md" "LICENSE" DESTINATION ".")

set(CPACK_GENERATOR "ZIP")
set(CPACK_PACKAGE_NAME "${CMAKE_PROJECT_NAME}")
set(CPACK_PACKAGE_VERSION_MAJOR "0")
set(CPACK_PACKAGE_VERSION_MINOR "0")
set(CPACK_PACKAGE_VERSION_PATCH "1")
set(CPACK_PACKAGE_VERSION "${CPACK_PACKAGE_VERSION_MAJOR}.${CPACK_PACKAGE_VERSION_MINOR}.${CPACK_PACKAGE_VERSION_PATCH}")

# This must always be last!
include(CPack)
