cmake_minimum_required(VERSION 3.16)
project(MatrixSolver)

set(CMAKE_CXX_STANDARD 20)

# مسیر نصب Qt خودت رو درست بگذار
set(CMAKE_PREFIX_PATH "C:/Qt/6.8.1/mingw_64")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -mwindows")
# پیدا کردن ماژول‌های لازم Qt6
find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)

# تنظیمات پایه پروژه Qt
qt_standard_project_setup()


# تعریف executable اصلی همراه با فایل‌های cpp، h، ui
qt_add_executable(MatrixSolver
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        developerinfo.cpp
        developerinfo.h
        developerinfo.ui
        helpdialog.cpp
        helpdialog.h
        helpdialog.ui
        icon.rc   # اگر لازم داری برای ویندوز، می‌تونی جدا اضافه کنی، اما معمولاً اینجا نیست
)

# اضافه کردن منابع به target
target_sources(MatrixSolver PRIVATE ${RESOURCES})

file(COPY images DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
# لینک دادن کتابخانه‌های Qt
target_link_libraries(MatrixSolver PRIVATE Qt6::Core Qt6::Gui Qt6::Widgets)
