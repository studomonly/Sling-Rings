//
//  SRStructs.h
//  Sling Rings
//
//  Created by Stuart Lynch on 20/02/2016.
//  Copyright © 2016 uea.ac.uk. All rights reserved.
//

struct SRRect {
    float x;
    float y;
    float width;
    float height;
};
typedef struct SRRect SRRect;

struct SRPoint {
    float x;
    float y;
    float z;
};
typedef struct SRPoint SRPoint;

struct SRColor {
    float r;
    float g;
    float b;
    float a;
};
typedef struct SRColor SRColor;

struct SRTexCoord {
    float x;
    float y;
};
typedef struct SRTexCoord SRTexCoord;

typedef struct {
    SRPoint point;
    SRColor color;
    SRTexCoord texCoord;
} SRVertex;

SRRect      SRRectMake(float x, float y, float width, float height);
SRPoint     SRPointMake(float x, float y, float z);
SRColor     SRColorMake(float r, float g, float b, float a);
SRTexCoord  SRTexCoordMake(float x, float y);
SRVertex SRVertexMake(SRPoint point, SRColor color, SRTexCoord texCoord);