//
//  BBTableView.h
//  CircleView
//
//  Created by Bharath Booshan on 9/11/12.
//
/*
 I'm happy you are using UITableViewTricks in your project.
 
 Let me know at bharath2020@gmail.com
 
 This is the MIT License.
 
 Copyright (c) 2012 Bharath Booshan. All rights reserved.
 Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
 The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#import <UIKit/UIKit.h>
#define CONTENT_SIZE_MULTIPLY_FACTOR 3

typedef enum _ContentAlignment
{
    eBBTableViewContentAlignmentLeft,
    eBBTableViewContentAlignmentRight
}EBBTableViewContentAlignment;

@interface BBTableView : UITableView


@property(nonatomic, assign, getter = isInfiniteScrollingEnabled)BOOL enableInfiniteScrolling;
@property(nonatomic, assign) EBBTableViewContentAlignment contentAlignment;
@property(nonatomic, assign) CGFloat horizontalRadiusCorrection;//value from 1.0 - 0.5;

@end
