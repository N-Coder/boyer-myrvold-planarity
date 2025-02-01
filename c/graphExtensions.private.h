#ifndef GRAPH_EXTENSIONS_PRIVATE_H
#define GRAPH_EXTENSIONS_PRIVATE_H

/*
Copyright (c) 1997-2022, John M. Boyer
All rights reserved.
See the LICENSE.TXT file for licensing information.
*/

#include "graphFunctionTable.h"

#ifdef __cplusplus
extern "C" {
#endif

struct graphExtension
{
    int  moduleID;
    void *context;
    void *(*dupContext)(void *, void *);
    void (*freeContext)(void *);

    graphFunctionTableP functions;

    graphExtension *next;
};

typedef graphExtension * graphExtensionP;

#ifdef __cplusplus
}
#endif

#endif
