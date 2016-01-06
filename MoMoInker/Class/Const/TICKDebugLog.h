//
//  TICKDebugLog.h
//  MoMoInker
//
//  Created by Server on 2016.01.06.
//  Copyright © 2016 tickCoder. All rights reserved.
//

#ifndef TICKDebugLog_h
#define TICKDebugLog_h

//TODO: should be change to 0 if to be released
#define TICK_DEBUG_MODE 1

#if TICK_DEBUG_MODE
#define TICKDebugLog(s, ...) NSLog(@"<%d>%s %@", __LINE__, __PRETTY_FUNCTION__, [NSString stringWithFormat:(s), ##__VA_ARGS__])
#else
#define TICKDebugLog(s, ...)
#endif

#endif /* TICKDebugLog_h */
