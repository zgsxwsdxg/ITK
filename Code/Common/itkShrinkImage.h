/*=========================================================================

  Program:   Insight Segmentation & Registration Toolkit
  Module:    itkShrinkImage.h
  Language:  C++
  Date:      $Date$
  Version:   $Revision$


  Copyright (c) 2000 National Library of Medicine
  All rights reserved.

  See COPYRIGHT.txt for copyright details.

=========================================================================*/
/**
 * itkShrinkImage reduces the size of an image by an integer factor.
 */
#ifndef __itkShrinkImage_h
#define __itkShrinkImage_h

#include "itkFilterImageToImage.h"

template <class TInputImage, class TOutputImage>
class ITK_EXPORT itkShrinkImage : 
  public itkFilterImageToImage<TInputImage,TOutputImage>
{
public:
  /** 
   * Smart pointer typedef support.
   */
  typedef itkSmartPointer< itkShrinkImage<TInputImage,TOutputImage> > Pointer;

  /** 
   * Create the source with one output initially.
   */
  static Pointer New();

  /** 
   * Run-time type information (and related methods).
   */
  itkTypeMacro(itkShrinkImage, itkFilterImageToImage);

  /** 
   * Set the shrink factor. The default value is 1.
   */
  itkSetMacro(ShrinkFactor,unsigned int);
  
  /** 
   * Get the shrink factor.
   */
  itkGetMacro(ShrinkFactor,unsigned int);
                 
protected:
  itkShrinkImage();
  ~itkShrinkImage() {};
  itkShrinkImage(const itkShrinkImage&) {};
  void operator=(const itkShrinkImage&) {};
  void PrintSelf(std::ostream& os, itkIndent indent);
  
  void Execute();

private:
  unsigned int m_ShrinkFactor;
};

#ifndef ITK_MANUAL_INSTANTIATION
#include "itkShrinkImage.txx"
#endif

#endif
