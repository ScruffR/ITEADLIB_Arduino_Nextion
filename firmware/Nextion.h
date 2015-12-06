/**
* @file Nextion.h
*
* The header file including all other header files provided by this library. 
*
* Every example sketch should include this file. 
*
* @author  Wu Pengfei (email:<pengfei.wu@itead.cc>)
* @date    2015/8/12
* @copyright 
* Copyright (C) 2014-2015 ITEAD Intelligent Systems Co., Ltd. \n
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License as
* published by the Free Software Foundation; either version 2 of
* the License, or (at your option) any later version.
*
* Port for Particle platform (particle.io)
* by BSpranger & ScruffR (Dec. 2015)
*/

#ifndef __NEXTION_H__
#define __NEXTION_H__
                              // applies to:
#define NexBACKCOLOR    "bco"    // Text, Number, Button, Progressbar,        ,     , Gauge, Waveform, Slider,      ,         ,
#define NexBACKCOLOR0   "bco0"   //     ,       ,       ,            ,        ,     ,      ,         ,       ,      ,         , DualStateButton
#define NexBACKCOLOR1   "bco1"   //     ,       ,       ,            ,        ,     ,      ,         ,       ,      ,         , DualStateButton
#define NexBACKCOLORACT "bco2"   //     ,       , Button,            ,        ,     ,      ,         ,       ,      ,         ,
#define NexFORECOLOR    "pco"    // Text, Number, Button, Progressbar,        ,     , Gauge,         , Slider,      ,         ,
#define NexFORECOLOR0   "pco0"   //     ,       ,       ,            ,        ,     ,      , Waveform,       ,      ,         ,
#define NexFORECOLOR1   "pco1"   //     ,       ,       ,            ,        ,     ,      , Waveform,       ,      ,         ,
#define NexFORECOLOR2   "pco2"   //     ,       ,       ,            ,        ,     ,      , Waveform,       ,      ,         ,
#define NexFORECOLOR3   "pco3"   //     ,       ,       ,            ,        ,     ,      , Waveform,       ,      ,         ,
#define NexFORECOLORACT "pco2"   //     ,       , Button,            ,        ,     ,      ,         ,       ,      ,         ,
#define NexPICTURE      "pic"    // Text, Number, Button,            , Picture,     ,      , Waveform, Slider,      ,         ,
#define NexPICTURE0     "pic0"   //     ,       ,       ,            ,        ,     ,      ,         ,       ,      ,         , DualStateButton
#define NexPICTURE1     "pic1"   //     ,       ,       ,            ,        ,     ,      ,         ,       ,      ,         , DualStateButton
#define NexPICTUREACT   "pic2"   // Text, Number, Button,            ,        ,     ,      ,         , Slider,      ,         ,
#define NexCROPIMAGE    "picc"   // Text, Number, Button,            ,        , Crop, Gauge, Waveform, Slider,      ,         ,
#define NexCROPIMAGE0   "picc0"  //     ,       ,       ,            ,        ,     ,      ,         ,       ,      ,         , DualStateButton
#define NexCROPIMAGE1   "picc1"  //     ,       ,       ,            ,        ,     ,      ,         ,       ,      ,         , DualStateButton
#define NexCROPIMAGEACT "picc2"  // Text, Number, Button,            ,        ,     ,      ,         ,       ,      ,         ,
#define NexBACKPICTURE  "bpic"   //     ,       ,       , Progressbar,        ,     ,      ,         ,       ,      ,         ,
#define NexFOREPICTURE  "ppic"   //     ,       ,       , Progressbar,        ,     ,      ,         ,       ,      ,         ,
#define NexFONT         "font"   // Text, Number, Button,            ,        ,     ,      ,         ,       ,      ,         ,
#define NexCENTERX      "xcen"   // Text, Number, Button,            ,        ,     ,      ,         ,       ,      ,         ,
#define NexCENTERY      "ycen"   // Text, Number, Button,            ,        ,     ,      ,         ,       ,      ,         ,
#define NexTEXT         "txt"    // Text,       , Button,            ,        ,     ,      ,         ,       ,      , Variable,
#define NexVALUE        "val"    //     , Number,       , Progressbar,        ,     , Gauge,         , Slider,      , Variable, DualStateButton
#define NexMINVALUE     "minval" //     ,       ,       ,            ,        ,     ,      ,         , Slider,      ,         , 
#define NexMAXVALUE     "maxval" //     ,       ,       ,            ,        ,     ,      ,         , Slider,      ,         , 
#define NexLENGTH       "lenth"  //     , Number,       ,            ,        ,     ,      ,         ,       ,      ,         , 
#define NexWIDTH        "wid"    //     ,       ,       ,            ,        ,     , Gauge,         ,       ,      ,         , 
#define NexGRIDCOLOR    "gdc"    //     ,       ,       ,            ,        ,     ,      , Waveform,       ,      ,         , 
#define NexGRIDWIDTH    "gdw"    //     ,       ,       ,            ,        ,     ,      , Waveform,       ,      ,         , 
#define NexTHUMBWIDTH   "wid"    //     ,       ,       ,            ,        ,     ,      ,         , Slider,      ,         , 
#define NexTHUMBHEIGHT  "hig"    //     ,       ,       ,            ,        ,     ,      ,         , Slider,      ,         , 
#define NexINTERVAL     "tim"    //     ,       ,       ,            ,        ,     ,      ,         ,       , Timer,         , 
#define NexENABLED      "en"     //     ,       ,       ,            ,        ,     ,      ,         ,       , Timer,         , 

#if defined(SPARK)
#include "application.h"
#else
#include "Arduino.h"
#endif

#include "NexConfig.h"
#include "NexTouch.h"
#include "NexHardware.h"

#include "NexButton.h"
#include "NexCrop.h"
#include "NexDualStateButton.h"
#include "NexGauge.h"
#include "NexHotspot.h"
#include "NexNumber.h"
#include "NexPage.h"
#include "NexPicture.h"
#include "NexProgressBar.h"
#include "NexSlider.h"
#include "NexText.h"
#include "NexVar.h"
#include "NexWaveform.h"
#include "NexTimer.h"

#include "NexGraphing.h"

#endif /* #ifndef __NEXTION_H__ */
