
add_library( base )

target_sources( base
  PRIVATE
	gui/Distance.cpp gui/Position.cpp gui/Rond.cpp gui/Rectangle.cpp gui/Ligne.cpp gui/Fleche.cpp
)

target_include_directories( base
  PUBLIC "." )

add_executable( ${PROJECT_NAME}
                main.cpp )

target_link_libraries( ${PROJECT_NAME} PRIVATE base )
