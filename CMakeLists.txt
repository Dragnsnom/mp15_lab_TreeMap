cmake_minimum_required(VERSION 2.8) #Проверка версии CMake.

set(PROJECT_NAME Lab15_TreeMap) #Создаем обычную локальную переменную с именем проекта
project(${PROJECT_NAME}) # Название проекта

set(NodeLib NodeLib) #Переменная с именем приложения
set(main main)
set(TreeMap TreeMap)
set(TreeMapIter TreeMapIter)
set(TreeNode TreeNode)

set(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "Configs" FORCE) #Создается переменная CMAKE_CONFIGURATION_TYPES со значением "Debug;Release" и меткой/разделом Configs, переменная сохраниется в специальном файле доступном из всех файлов,
if(NOT CMAKE_BUILD_TYPE) # проверка имеющихся у компилятора вариантов сборки
  set(CMAKE_BUILD_TYPE Release) #Если нет то устанавливаем Release
endif()

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/TreeNode
${CMAKE_CURRENT_SOURCE_DIR}/TreeMap 
${CMAKE_CURRENT_SOURCE_DIR}/TreeMapIter 
${CMAKE_CURRENT_SOURCE_DIR}/NodeLIb)
#${CMAKE_CURRENT_SOURCE_DIR} - стандартная переменная с адресом рабочей директории

 #Добавляем директорию с под-CMakeList-ом, и выполняем под-CMakeList
add_subdirectory(TreeNode)
add_subdirectory(TreeMap)
add_subdirectory(TreeMapIter)
add_subdirectory(NodeLib)
add_subdirectory(main)

add_subdirectory(gtest)
add_subdirectory(test)
