#include "elements_data.h"

//元素数据表数据内容
/*
typedef struct elementData_ {
    char* symbol;  // 元素符号
    char* i18nKey; // 元素名称的 i18n key
    double numberOfMass;    // 质量数 A
    double molarMass;    // 摩尔质量/原子量，单位 g·mol⁻¹
    double electronegativity; // 电负性
    int radius; // 原子半径，单位 pm
    double meltingPoint; // 熔点，单位 K
    double boilingPoint; // 沸点，单位 K
    double density; // 密度，单位 g/cm³
    double affinity; // 电子亲和能/电子亲和力，单位 kJ·mol⁻¹
    double energyOfIonization;// 电离能，单位 kJ·mol⁻¹
    int group; // 族
    int PhysicalState; // 物态：0 固态，1 液态，2 气态
    int block; // 块：0 s 块，1 p 块，2 d 块，3 f 块
    //static constexpr int k_AUnknown = -1; // 质量数未知时的特殊值
}ElementData;
*/
ElementData elementData[] = {
{1,"H","氢",1,1.008,2.2,32,-259.16,-252.879,0.000088,72.7700191,1312.04602,Nonmetal,Gas, S},    					
{2,"He","氦",4,4.003, k_unknown,37,k_unknown,-268.928,0.000176, k_affinityUnstable,2372.323237,NobleGas,Gas, S},    
{3,"Li","锂",7,6.94,0.98,130,180.5,1342,0.534,59.63265756,520.2199175,Alkali,Solid, S},    
{4,"Be","铍",9,9.012,1.57,99,1287,2468,1.8477, k_affinityUnstable,899.5037233,AlkalineEarth,Solid, S},    
{5,"B","硼",11,10.81,2.04,84,2077,4000,2.34,26.98916408,800.6352125,Metalloid,Solid, P},    
{6,"C","碳",12,12.011,2.55,75,3642,3642,3.513,121.7759597,1086.453686,Nonmetal,Solid, P},    
{7,"N","氮",14,14.007,3.04,71,-210,-195.795,0.001165, k_affinityUnstable,1402.327337,Nonmetal,Gas, P},    
{8,"O","氧",16,15.999,3.44,64,-218.79,-182.962,0.001331,140.9760084,1313.946781,Nonmetal,Gas, P},    
{9,"F","氟",19,18.998,3.98,60,-219.67,-188.11,0.001667,328.1648877,1681.04449,Halogen,Gas, P},    
{10,"Ne","氖",20,20.18, k_unknown,62,-248.59,-246.046,0.0008999,0,2080.657754,NobleGas,Gas, P},    
{11,"Na","钠",23,22.99,0.93,160,97.794,882.94,0.968,52.86681724,495.8477248,Alkali,Solid, S},    
{12,"Mg","镁",24,24.305,1.31,140,650,1090,1.738, k_affinityUnstable,737.7460788,AlkalineEarth,Solid, S},    
{13,"Al","铝",27,26.982,1.61,124,660.323,2519,2.7,41.76174247,577.541848,PostTransitionMetal,Solid, P},    
{14,"Si","硅",28,28.085,1.9,114,1414,3265,2.33,134.0683925,786.5194097,Metalloid,Solid, P},    
{15,"P","磷",31,30.974,2.19,109,44.15,280.5,1.823,72.03661775,1011.81264,Nonmetal,Solid, P},    
{16,"S","硫",32,32.06,2.58,104,115.21,444.61,1.92,200.4100538,999.5879491,Nonmetal,Solid, P},    
{17,"Cl","氯",35,35.45,3.16,100,-101.5,-34.04,0.00298,348.5749395,1251.183078,Halogen,Gas, P},    
{18,"Ar","氩",40,39.948, k_unknown,101,-139.34,-185.848,0.0017824,0,1520.570101,NobleGas,Gas, P},    
{19,"K","钾",39,39.098,0.82,200,63.5,759,0.89,48.38449506,418.8138427,Alkali,Solid, S},    
{20,"Ca","钙",40,40.078,1,174,842,1484,1.55,2.368714686,589.8340782,AlkalineEarth,Solid, S},    
{21,"Sc","钪",45,44.956,1.36,159,1541,2836,2.895,18.13924077,633.0884486,TransitionMetal,Solid, D},    
{22,"Ti","钛",48,47.867,1.54,148,1670,3287,4.506,7.622340538,658.8114358,TransitionMetal,Solid, D},    
{23,"V","钒",51,50.942,1.63,144,1910,3407,6.11,50.65479472,650.9092878,TransitionMetal,Solid, D},    
{24,"Cr","铬",52,51.996,1.66,130,1907,2671,7.15,64.2592253,652.8679399,TransitionMetal,Solid, D}, 
{25,"Mn","锰",55,54.938,1.55,129,1246,2061,7.21, k_affinityUnstable,717.2718932,TransitionMetal,Solid, D},    
{26,"Fe","铁",56,55.845,1.83,124,1538,2861,7.86,14.56928381,762.4656186,TransitionMetal,Solid, D},    
{27,"Co","钴",59,58.933,1.88,118,1495,2927,8.9,63.87328401,760.4008327,TransitionMetal,Solid, D},    
{28,"Ni","镍",58,58.693,1.91,117,1455,2913,8.908,111.5370337,737.1382213,TransitionMetal,Solid, D},    
{29,"Cu","铜",63,63.546,1.9,122,1084.62,2560,8.96,119.1593742,745.4842017,TransitionMetal,Solid, D},    
{30,"Zn","锌",64,65.38,1.65,120,419.527,907,7.14, k_affinityUnstable,906.4024239,TransitionMetal,Solid, D},    
{31,"Ga","镓",69,69.723,1.81,123,29.7666,2229,5.904,41.48868901,578.8443999,PostTransitionMetal,Solid, P},    
{32,"Ge","锗",74,72.63,2.01,120,938.25,2833,5.323,118.9386158,762.1761626,Metalloid,Solid, P},    
{33,"As","砷",75,74.922,2.01,120,817,616,5.727,77.57419991,944.4562354,Metalloid,Solid, P},    
{34,"Se","硒",80,78.971,2.55,118,220.8,685,4.81,194.9649982,940.9634667,Nonmetal,Solid, P},    
{35,"Br","溴",79,79.904,2.96,117,-7.2,58.8,3.1022,324.5368948,1139.858312,Halogen,Liquid, P},    
{36,"Kr","氪",84,83.798, k_unknown,116,-157.37,-153.415,0.0037493,0,1350.755932,NobleGas,Gas, P},    
{37,"Rb","铷",85,85.468,0.82,215,39.3,688,1.532,46.88414828,403.0288438,Alkali,Solid, S},    
{38,"Sr","锶",88,87.62,0.95,190,777,1377,2.64,4.631295517,549.4742675,AlkalineEarth,Solid, S},    
{39,"Y","钇",89,88.906,1.22,176,1522,3345,4.472,29.62099424,599.8782004,TransitionMetal,Solid, D},    
{40,"Zr","锆",90,91.224,1.33,164,1854,4406,6.52,41.10274771,640.073986,TransitionMetal,Solid, D},    
{41,"Nb","铌",93,92.906,1.6,156,2477,4741,8.57,88.38055612,652.1346515,TransitionMetal,Solid, D},    
{42,"Mo","钼",98,95.95,2.16,146,2622,4639,10.28,72.17102181,684.3125068,TransitionMetal,Solid, D},    
{43,"Tc","锝",98, k_unknown,2.1,138,2157,4262,11,53.0669278,702.4131534,TransitionMetal,Solid, D},    
{44,"Ru","钌",102,101.07,2.2,121,2333,4147,12.45,101.3095894,710.1802219,TransitionMetal,Solid, D},    
{45,"Rh","铑",103,102.91,2.28,134,1963,3695,12.41,109.7038126,719.6743777,TransitionMetal,Solid, D},    
{46,"Pd","钯",106,106.42,2.2,130,1554.8,2963,12.023,54.22475168,804.3884916,TransitionMetal,Solid, D},    
{47,"Ag","银",107,107.87,1.93,136,961.78,2162,10.49,125.6238909,730.9921062,TransitionMetal,Solid, D},    
{48,"Cd","镉",114,112.41,1.69,140,321.78,767,8.65, k_affinityUnstable,867.7697004,TransitionMetal,Solid, D},    
{49,"In","铟",115,114.82,1.78,142,156.5985,2027,7.31,28.94559698,558.3026746,PostTransitionMetal,Solid, P},    
{50,"Sn","锡",120,118.71,1.96,140,231.928,2586,7.265,107.298144,708.5785656,PostTransitionMetal,Solid, P},    
{51,"Sb","锑",121,121.76,2.05,140,630,1587,6.697,100.9236481,830.5842568,Metalloid,Solid, P},    
{52,"Te","碲",130,127.6,2.1,137,449.51,988,6.24,190.160608,869.2941685,Metalloid,Solid, P},    
{53,"I","碘",127,126.9,2.66,136,113.7,184.4,4.63,295.1521545,1008.397059,Halogen,Solid, P},    
{54,"Xe","氙",132,131.29,2.6,136,-111.75,-108.099,0.005761,0,1170.347674,NobleGas,Gas, P},    
{55,"Cs","铯",133,132.91,0.79,238,28.5,671,1.8785,45.50498707,375.7042003,Alkali,Solid, S},    
{56,"Ba","钡",138,137.33,0.89,206,727,1845,3.51,13.95370745,502.8525593,AlkalineEarth,Solid, S},    
 
{72,"Hf","铪",180,178.49,1.3,164,2233,4600,13.31,1.350794526,658.5219799,TransitionMetal,Solid, D},    
{73,"Ta","钽",181,180.95,1.5,158,3017,5455,16.69,31.06827409,728.4255966,TransitionMetal,Solid, D},    
{74,"W","钨",184,183.84,1.7,150,3414,5555,19.25,78.75710997,758.7605822,TransitionMetal,Solid, D},    
{75,"Re","铼",187,186.21,1.9,141,3185,5590,21.02,14.47279849,755.8177798,TransitionMetal,Solid, D},    
{76,"Os","锇",192,190.23,2.2,136,3033,5008,22.61,106.1338556,814.1624548,TransitionMetal,Solid, D},    
{77,"Ir","铱",193,192.22,2.2,132,2446,4428,22.65,150.8837485,865.1838938,TransitionMetal,Solid, D},    
{78,"Pt","铂",195,195.08,2.2,130,1768.2,3825,21.09,205.3207679,864.3927141,TransitionMetal,Solid, D},    
{79,"Au","金",197,196.97,2.4,130,1064.18,2836,19.3,222.7489119,890.1253498,TransitionMetal,Solid, D},    
{80,"Hg","汞",202,200.59,1.9,132,-38.829,356.619,13.534, k_affinityUnstable,1007.065562,TransitionMetal,Liquid, D},    
{81,"Tl","铊",205,204.38,1.8,144,304,1473,11.85,36.37496687,589.3516516,PostTransitionMetal,Solid, P},    
{82,"Pb","铅",208,207.2,1.8,145,327.462,1749,11.34,35.12065767,715.6026971,PostTransitionMetal,Solid, P},    
{83,"Bi","铋",209,208.98,1.9,150,271.462,1564,9.78,90.92410221,702.9438227,PostTransitionMetal,Solid, P},    
{84,"Po","钋",209, k_unknown,2,142,254,962,9.196,183.3221142,811.82751,Metalloid,Solid, P},    
{85,"At","砹",210, k_unknown,2.2,148,302,k_unknown, k_unknown,270.1589052, k_unknown,Metalloid,Solid, P},    
{86,"Rn","氡",222, k_unknown, k_unknown,146,-71,-61.00973,0.00973, k_affinityUnstable,1037.072497,NobleGas,Gas, P},    
{87,"Fr","钫",223, k_unknown,0.7,242,21,k_unknown, k_unknown,44.3832487,392.9557761,Alkali,Solid, S},    
{88,"Ra","镭",226, k_unknown,0.9,211,696,k_unknown,5.5, k_unknown,509.2881304,AlkalineEarth,Solid, S},    

{104,"Rf","𬬻",261, k_unknown, k_unknown,157,k_unknown, k_unknown, k_unknown, k_unknown,578.9119396,TransitionMetal,Solid, D},    
{105,"Db","𬭊",262, k_unknown, k_unknown,149,k_unknown, k_unknown, k_unknown, k_unknown, k_unknown,TransitionMetal,Solid, D},    
{106,"Sg","𬭳",263, k_unknown, k_unknown,143,k_unknown, k_unknown, k_unknown, k_unknown, k_unknown,TransitionMetal,Solid, D},    
{107,"Bh","𨨏",264, k_unknown, k_unknown,141,k_unknown, k_unknown, k_unknown, k_unknown, k_unknown,TransitionMetal,Solid, D},    
{108,"Hs","𬭶",265, k_unknown, k_unknown,134,k_unknown, k_unknown, k_unknown, k_unknown, k_unknown,TransitionMetal,Solid, D},    
{109,"Mt","鿏",268, k_unknown, k_unknown,129,k_unknown, k_unknown, k_unknown, k_unknown, k_unknown,Unidentified,Solid, D},    
{110,"Ds","𫟼",271, k_unknown, k_unknown,128,k_unknown, k_unknown, k_unknown, k_unknown, k_unknown,Unidentified,Solid, D},    
{111,"Rg","𬬭",272, k_unknown, k_unknown,121,k_unknown, k_unknown, k_unknown, k_unknown, k_unknown,Unidentified,Solid, D},    
{112,"Cn","鿔", k_AUnknown, k_unknown,k_unknown,122, k_unknown, k_unknown, k_unknown, k_unknown,k_unknown,Unidentified,Solid,D},    
{113,"Nh","鉨", k_AUnknown, k_unknown,k_unknown,136, k_unknown, k_unknown, k_unknown, k_unknown,k_unknown,Unidentified,Solid,P},    
{114,"Fl","𫓧", k_AUnknown, k_unknown,k_unknown,143, k_unknown, k_unknown, k_unknown, k_unknown, k_unknown,Unidentified,Solid, P},    
{115,"Mc","镆", k_AUnknown, k_unknown,k_unknown,162, k_unknown, k_unknown, k_unknown, k_unknown,k_unknown,Unidentified,Solid,P},    
{116,"Lv","𫟷", k_AUnknown, k_unknown,k_unknown,175, k_unknown, k_unknown, k_unknown, k_unknown,k_unknown,Unidentified,Solid,P},    
{117,"Ts","Ts", k_AUnknown, k_unknown,k_unknown,165, k_unknown, k_unknown, k_unknown, k_unknown,k_unknown,Unidentified,Solid,P},    
{118,"Og","Og", k_AUnknown, k_unknown,k_unknown,157, k_unknown, k_unknown, k_unknown,5.403178103, k_unknown,Unidentified,Solid, P},    

{57,"La","镧",139,138.91,1.1,194,920,3464,6.162,45.34810194,538.0889993,Lanthanide,Solid, F},    
{58,"Ce","铈",140,140.12,1.12,184,799,3443,6.773,62.71546013,534.40326,Lanthanide,Solid, F},    
{59,"Pr","镨",141,140.91,1.13,190,931,3520,6.475,92.81888099,528.0641743,Lanthanide,Solid, F},    
{60,"Nd","钕",142,144.24,1.14,188,1016,3074,7.01, k_unknown,533.0814111,Lanthanide,Solid, F},    
{61,"Pm","钷",145, k_unknown, k_unknown,186,1042,3000,7.22, k_unknown,538.5810745,Lanthanide,Solid, F},    
{62,"Sm","钐",152,150.36,1.17,185,1072,1794,7.52, k_unknown,544.5342189,Lanthanide,Solid, F},    
{63,"Eu","铕",153,151.96, k_unknown,183,822,1529,5.244,83.36331931,547.1103771,Lanthanide,Solid, F},    
{64,"Gd","钆",158,157.25,1.2,182,1313,3273,7.9, k_unknown,593.3654411,Lanthanide,Solid, F},    
{65,"Tb","铽",159,158.93, k_unknown,181,1359,3230,8.23, k_unknown,565.7706386,Lanthanide,Solid, F},    
{66,"Dy","镝",164,162.5,1.22,180,1412,2567,8.54, k_unknown,573.0166864,Lanthanide,Solid, F},    
{67,"Ho","钬",165,164.93,1.23,179,1472,2700,8.79, k_unknown,580.9863741,Lanthanide,Solid, F},    
{68,"Er","铒",166,167.26,1.24,177,1529,2868,9.066, k_unknown,589.3034089,Lanthanide,Solid, F},    
{69,"Tm","铥",169,168.93,1.25,177,1545,1950,9.32,99.28339765,596.6941847,Lanthanide,Solid, F},    
{70,"Yb","镱",174,173.05, k_unknown,178,824,1196,6.9,-1.929706465,603.4385088,Lanthanide,Solid, F},    
{71,"Lu","镥",175,174.97,1,174,1663,3402,9.841,32.80500991,523.5197155,Lanthanide,Solid, D},   

{89,"Ac","锕",227, k_unknown,1.1,201,1050,3200,10.07,33.76986314,519.1585789,Actinide,Solid, F},    
{90,"Th","钍",232,232.04,1.3,190,1750,4785,11.7, k_unknown,608.5039883,Actinide,Solid, F},    
{91,"Pa","镤",231,231.04,1.5,184,1572,k_unknown,15.37, k_unknown,568.2985541,Actinide,Solid, F},    
{92,"U","铀",238,238.03,1.7,183,1135,4131,19.1, k_unknown,597.6204438,Actinide,Solid, F},    
{93,"Np","镎",237, k_unknown,1.3,180,644,3902,20.2, k_unknown,604.54809,Actinide,Solid, F},    
{94,"Pu","钚",244, k_unknown,1.3,180,640,3228,19.816, k_unknown,581.420558,Actinide,Solid, F},    
{95,"Am","镅",243, k_unknown,1.3,173,1176,2011,12, k_unknown,576.3840242,Actinide,Solid, F},    
{96,"Cm","锔",247, k_unknown,1.3,168,1345,k_unknown,13.51, k_unknown,578.0821658,Actinide,Solid, F},    
{97,"Bk","锫",247, k_unknown,1.3,168,986,k_unknown,14.78, k_unknown,598.0063851,Actinide,Solid, F},    
{98,"Cf","锎",251, k_unknown,1.3,168,900,k_unknown, k_unknown, k_unknown,606.0918552,Actinide,Solid, F},    
{99,"Es","锿", k_AUnknown, k_unknown,1.3,165,860, k_unknown,8.84, k_unknown,614.3799445,Actinide,Solid, F},    
{100,"Fm","镄",257, k_unknown,1.3,167,1527,k_unknown, k_unknown, k_unknown,627.1546013,Actinide,Solid, F},    
{101,"Md","钔",258, k_unknown,1.3,173,827,k_unknown, k_unknown, k_unknown,634.8734271,Actinide,Solid, F},    
{102,"No","锘",259, k_unknown,1.3,176,827,k_unknown, k_unknown, k_unknown,641.6273998,Actinide,Solid, F},    
{103,"Lr","铹",262, k_unknown, k_unknown,161,1627, k_unknown, k_unknown, k_unknown,478.5672034,Actinide,Solid, D},    
};
ElementItemsPos element_data[ELEMENTS_ITEM_COUNT]= {0};
void elements_data_itempost_init(void)
{
    //第一行
    element_data[0].x = ELEMENTS_ITEM_STARTX;
    element_data[0].y = ELEMENTS_ITEM_STARTY;

    element_data[1].x = ELEMENTS_ITEM_STARTX + 17*ELEMENTS_ITEM_W + 17*ELEMENTS_ITEM_CONTEXT;
    element_data[1].y = ELEMENTS_ITEM_STARTY;

    //第二行
    element_data[2].x = ELEMENTS_ITEM_STARTX ;
    element_data[2].y = ELEMENTS_ITEM_STARTY + 1*ELEMENTS_ITEM_H + 1*ELEMENTS_ITEM_CONTEXT;

    element_data[3].x = ELEMENTS_ITEM_STARTX + 1*ELEMENTS_ITEM_W + 1*ELEMENTS_ITEM_CONTEXT;
    element_data[3].y = ELEMENTS_ITEM_STARTY + 1*ELEMENTS_ITEM_H + 1*ELEMENTS_ITEM_CONTEXT;

    for(int i = 0; i <= 5 ; i++)
    {
        element_data[4 + i].x = ELEMENTS_ITEM_STARTX + (12 + i)*ELEMENTS_ITEM_W + (12 + i)*ELEMENTS_ITEM_CONTEXT;
        element_data[4 + i].y = ELEMENTS_ITEM_STARTY + 1*ELEMENTS_ITEM_H + 1*ELEMENTS_ITEM_CONTEXT;
    }

    //第三行
    element_data[10].x = ELEMENTS_ITEM_STARTX;
    element_data[10].y = ELEMENTS_ITEM_STARTY + 2*ELEMENTS_ITEM_H + 2*ELEMENTS_ITEM_CONTEXT;

    element_data[11].x = ELEMENTS_ITEM_STARTX + 1*ELEMENTS_ITEM_W + 1*ELEMENTS_ITEM_CONTEXT;
    element_data[11].y = ELEMENTS_ITEM_STARTY + 2*ELEMENTS_ITEM_H + 2*ELEMENTS_ITEM_CONTEXT;
    for(int i = 0; i <= 5 ; i++)
    {
        element_data[12 + i].x = ELEMENTS_ITEM_STARTX + (12 + i)*ELEMENTS_ITEM_W + (12 + i)*ELEMENTS_ITEM_CONTEXT;
        element_data[12 + i].y = ELEMENTS_ITEM_STARTY + 2*ELEMENTS_ITEM_H + 2*ELEMENTS_ITEM_CONTEXT;
    }

    //第四 五  六 七行
    int num = 0;
    for(int j = 0; j < 4; j++)
    {
        for(int i = 0; i <= 17 ; i++)
        {
            
            element_data[18 + num].x = ELEMENTS_ITEM_STARTX + i*ELEMENTS_ITEM_W + i*ELEMENTS_ITEM_CONTEXT;
            element_data[18 + num].y = ELEMENTS_ITEM_STARTY + (3 + j)*ELEMENTS_ITEM_H + (3 + j)*ELEMENTS_ITEM_CONTEXT;
            num ++;
        }
    }
    num = 0;
    //第八行
    for(int j = 0; j < 2; j++)
    {
        for(int i = 0; i < 16 ; i++)
        {
            element_data[90 + num].x = 2*ELEMENTS_ITEM_STARTX + ELEMENTS_ITEM_W + i*ELEMENTS_ITEM_W + i*ELEMENTS_ITEM_CONTEXT;
            element_data[90 + num].y = ELEMENTS_ITEM_STARTY + (7 + j)*ELEMENTS_ITEM_H + (7 + j)*ELEMENTS_ITEM_CONTEXT;
            num ++;
        }
    }
    
    return;
}