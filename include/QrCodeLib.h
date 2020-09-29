//==========================================================================//
// Ekaitza Gazte Taldea                                                     //
// C\ Renteria Nº3 Bajo                                      			    //
// 20110, Trintxerpe                                                        //
// SPAIN                                                                    //
//                                                                          //
// Copyright (c) 2020 by Erik Fustes                                        //
// All rights reserved.                                                     //
// Erik Fustes provides this product without warranty of any kind and shall //
// not be liable for any damages caused by the use of this product.         //
//==========================================================================//


#pragma once

#if defined (WIN32)
#if defined (_MSC_VER)
#pragma warning(disable: 4251)
#endif
	// The variable ARLib_EXPORTS is automatically handled by CMake when creating
	// a shared library. The name is automatically generated as ${LibraryName}_EXPORTS
   #if defined(QrCode_EXPORTS)
     #define  QRCODE_EXPORT __declspec(dllexport)
   #else
     #define  QRCODE_EXPORT __declspec(dllimport)
   #endif
#else
  #define QRCODE_EXPORT
#endif

extern "C"
{
	bool QRCODE_EXPORT printQrCodeLibVersion();
}