#ifndef __ELEMENTS_DATA_H__
#define __ELEMENTS_DATA_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//族
enum Group{
    Nonmetal,
    NobleGas,
    Alkali,
    AlkalineEarth,
    Metalloid,
    Halogen,
    TransitionMetal,
    PostTransitionMetal,
    Lanthanide,
    Actinide,
    Unidentified,
};

//物态属性
enum State{
    Solid,
    Liquid,
    Gas,
    State_Unknown,
};

//块属性
enum Block{
    S,
    P,
    D,
    F,
    Block_Unknown,
};

//未知内容
#define k_unknown -1

//质量数未知
#define k_AUnknown -1

//亲和力不稳定
#define k_affinityUnstable -9999

// 定义元素数据结构
typedef struct elementData_ {
    unsigned int id;
    char* symbol;  // 元素符号
    char* i18nKey; // 元素名称的 i18n key
    int numberOfMass;    // 质量数 A
    double molarMass;    // 摩尔质量/原子量，单位 g·mol⁻¹
    double electronegativity; // 电负性
    int radius; // 原子半径，单位 pm
    double meltingPoint; // 熔点，单位 K
    double boilingPoint; // 沸点，单位 K
    double density; // 密度，单位 g/cm³
    double affinity; // 电子亲和能/电子亲和力，单位 kJ·mol⁻¹
    double energyOfIonization;// 电离能，单位 kJ·mol⁻¹
    unsigned short group; // 族
    unsigned short physicalState; // 物态：0 固态，1 液态，2 气态
    unsigned short block; // 块：0 s 块，1 p 块，2 d 块，3 f 块
    //static constexpr int k_AUnknown = -1; // 质量数未知时的特殊值
}ElementData;

//颜色定义

//当前选项快照
typedef struct _menuState{
    unsigned int id;        //指向当前的元素ID
    unsigned int show_type; //页面显示类型
} MenuState;



#endif