project(ITKFEM)
set(ITKFEM_LIBRARIES ITKFEM)
if(ITK_TEMPLATE_VISIBILITY_DEFAULT)
  add_definitions( "-DVNL_TEMPLATE_EXPORT=__attribute__((visibility(\"default\")))")
endif()
itk_module_impl()
# Because dsrc2c.c is 'C' and not 'C++' (CMake >= 3 knows not to use
# this property on 'C' files )
if( CMAKE_VERSION VERSION_LESS 3 )
  set_property(TARGET ITKFEM PROPERTY VISIBILITY_INLINES_HIDDEN 0)
endif()
