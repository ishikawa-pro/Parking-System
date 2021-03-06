//
//  templateMatch.hpp
//  openCVtest1
//
//  Created by 石川諒 on 2016/10/15.
//  Copyright © 2016年 石川諒. All rights reserved.
//

#ifndef templateMatch_hpp
#define templateMatch_hpp

#include <stdio.h>
#include "cv.h"
#include "highgui.h"

#endif /* templateMatch_hpp */

class TemplateMatch{
private:
    void location_sort();
    int Number_Matching(IplImage *src_img);
    int CategoryNum_Matching(IplImage *src_img);
    std::string Hiragana_Matching(IplImage *src_img);
public:
    std::string Matching();
    int location[4][2]; //ナンバーのx座標と数字を格納
    int category_num[3][2];
};