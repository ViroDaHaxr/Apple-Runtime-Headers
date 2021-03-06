//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSMutableArray, _CFXNotificationRegistrationBase;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct Block_byref {
    void *_field1;
    struct Block_byref *_field2;
    int _field3;
    unsigned int _field4;
};

struct NSMethodFrameArgInfo {
    struct NSMethodFrameArgInfo *_field1;
    struct NSMethodFrameArgInfo *_field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned char _field7;
    char _field8;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned char _field9;
    char _field10[0];
};

struct NSMethodFrameDescriptor {
    struct NSMethodFrameArgInfo *_field1;
    struct NSMethodFrameArgInfo *_field2;
    unsigned int _field3;
    unsigned int _field4;
};

struct _NSRange {
    unsigned int _field1;
    unsigned int _field2;
};

struct __CFArray;

struct __cfobservers_t {
    id slot;
    struct __cfobservers_t *next;
};

struct _opaque_pthread_mutex_t {
    long __sig;
    char __opaque[40];
};

struct edge {
    unsigned int _field1;
    unsigned int _field2[2];
    unsigned int _field3;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct vertex {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int *_field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long state;
    id *itemsPtr;
    unsigned long *mutationsPtr;
    unsigned long extra[5];
} CDStruct_c73467ff;

typedef struct {
    id *_field1;
    int _field2;
    unsigned int _field3;
    _Bool _field4;
} CDStruct_08ecd808;

typedef struct {
    int _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
} CDStruct_459b2a3d;

typedef struct {
    int version;
    void *info;
    CDUnknownFunctionPointerType retain;
    CDUnknownFunctionPointerType release;
    CDUnknownFunctionPointerType copyDescription;
} CDStruct_304912e7;

typedef struct {
    int _field1;
    int _field2;
    int _field3;
} CDStruct_77932685;

typedef struct {
    int _field1;
    int _field2;
} CDStruct_1ef3fb1f;

typedef struct {
    struct __CFBasicHash *set;
    NSMutableArray *array;
} CDStruct_2595eaee;

typedef struct {
    int _field1;
    int _field2;
    struct __CFArray *_field3;
    struct __CFArray *_field4;
} CDStruct_199678ce;

typedef struct {
    int _field1;
    int _field2;
    struct __CFArray *_field3;
} CDStruct_79d58866;

typedef struct {
    CDStruct_08ecd808 _field1;
    CDStruct_08ecd808 _field2;
} CDStruct_e7b0119b;

typedef struct {
    union {
        struct __CFNull *empty;
        _CFXNotificationRegistrationBase *child;
        struct __CFDictionary *children;
    } elements;
    void *singleChildKey;
    struct *callbacks;
} CDStruct_a86bd46d;

typedef struct {
    id *objs;
    union {
        unsigned long mutations;
        struct {
            unsigned int muts;
            unsigned int used:26;
            unsigned int szidx:6;
        } ;
    } state;
} CDStruct_a10b2623;

typedef struct {
    id *buffer;
    union {
        struct {
            unsigned long mutations;
        } ;
        struct {
            unsigned int muts;
            unsigned int other;
        } ;
        struct {
            unsigned int mutbits:31;
            unsigned int copyKeys:1;
            unsigned int used:25;
            unsigned int kvo:1;
            unsigned int szidx:6;
        } ;
    } state;
} CDStruct_61b66446;

typedef struct {
    id *list;
    unsigned int offset;
    unsigned int size;
    union {
        unsigned long mutations;
        struct {
            unsigned int muts;
            unsigned int used;
        } ;
    } state;
} CDStruct_fa2df2d6;

