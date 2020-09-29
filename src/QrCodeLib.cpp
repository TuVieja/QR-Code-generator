//==========================================================================//
// Ekaitza Gazte Taldea                                                     //
// C\ Renteria N?3 Bajo                                      			    //
// 20110, Trintxerpe                                                        //
// SPAIN                                                                    //
//                                                                          //
// Copyright (c) 2020 by Erik Fustes                                        //
// All rights reserved.                                                     //
// Erik Fustes provides this product without warranty of any kind and shall //
// not be liable for any damages caused by the use of this product.         //
//==========================================================================//

#include "QrCodeLib.h"
#include <iostream>

bool printQrCodeLibVersion()
{
	std::cout<<"Ekaitza Gazte Taldea QrCodeLib 0.0.1"<<std::endl;
	return true;
}

static bool init = printQrCodeLibVersion();