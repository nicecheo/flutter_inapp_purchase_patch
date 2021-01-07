#import <Flutter/Flutter.h>

@interface FlutterInappPurchasePlugin : NSObject<FlutterPlugin, SKProductsRequestDelegate, SKPaymentTransactionObserver>{
     SKProductsRequest *productsRequest;
     NSMutableArray *validProducts;
}
@end
