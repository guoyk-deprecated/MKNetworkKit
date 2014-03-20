
#import "MKNetworkOperation.h"

@interface MKNetworkOperation (CWInternal)

- (void)configurePostFieldsBeforeStart:(NSMutableDictionary *)postFields;

@end