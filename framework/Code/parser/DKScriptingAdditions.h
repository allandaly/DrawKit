/**
 @author Jason Jobe
 @author Contributions from the community; see CONTRIBUTORS.md
 @date 2005-2015
 @copyright MPL2; see LICENSE.txt
*/

#import <Cocoa/Cocoa.h>

@class DKExpression;

@interface NSColor (DKStyleExpressions)

+ (NSColor*)instantiateFromExpression:(DKExpression*)expr;
- (NSString*)styleScript;

@end

@interface NSShadow (DKStyleExpressions)

+ (NSShadow*)instantiateFromExpression:(DKExpression*)expr;
- (NSString*)styleScript;

@end
