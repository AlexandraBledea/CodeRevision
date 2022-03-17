cmake_minimum_required(VERSION 3.19)
project(Code_revision)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_PREFIX_PATH "C:\\Qt\\5.15.2\\mingw73_64\\lib\\cmake\\")
set(QT_VERSION 5)
set(REQUIRED_LIBS Core Gui Widgets Charts)
set(REQUIRED_LIBS_QUALIFIED Qt5::Core Qt5::Charts Qt5::Gui Qt5::Widgets)

include_directories(Programmer)
include_directories(SourceFile)
include_directories(RepoFiles)
include_directories(RepoProgrammers)
include_directories(Observer)
include_directories(ProgrammerWindow)
include_directories(TableModel)
include_directories(StatisticsWindow)
add_executable(Code_revision main.cpp Programmer/Programmer.cpp
        Programmer/Programmer.h
        SourceFile/SourceFile.cpp
        SourceFile/SourceFile.h
        Observer/Observer.h
        RepoFiles/Files.cpp
        RepoFiles/Files.h
        RepoProgrammers/RepoProgrammers.cpp
        RepoProgrammers/RepoProgrammers.h
        ProgrammerWindow/ProgrammerWindow.cpp
        ProgrammerWindow/ProgrammerWindow.h
        TableModel/TableModel.cpp
        TableModel/TableModel.h
        StatisticsWindow/StatisticsWindow.cpp
        StatisticsWindow/StatisticsWindow.h)

if (NOT CMAKE_PREFIX_PATH)
    message(WARNING "CMAKE_PREFIX_PATH is not defined, you may need to set it "
            "(-DCMAKE_PREFIX_PATH=\"path/to/Qt/lib/cmake\" or -DCMAKE_PREFIX_PATH=/usr/include/{host}/qt{version}/ on Ubuntu)")
endif ()

find_package(Qt${QT_VERSION} COMPONENTS ${REQUIRED_LIBS} REQUIRED)
target_link_libraries(${PROJECT_NAME} ${REQUIRED_LIBS_QUALIFIED})