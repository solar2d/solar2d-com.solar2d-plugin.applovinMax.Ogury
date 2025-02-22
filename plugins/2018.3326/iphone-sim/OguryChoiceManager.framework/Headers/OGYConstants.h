//
//  Copyright © 2015 - 2022 Ogury Ltd. All rights reserved.
//

typedef NS_ENUM(NSInteger, ConsentManagerPurpose) {
    ConsentManagerPurposeInformation        = 1,
    ConsentManagerPurposePersonalisation    = 2,
    ConsentManagerPurposeAd                 = 3,
    ConsentManagerPurposeContent            = 4,
    ConsentManagerPurposeMeasurement        = 5
};

typedef NS_ENUM(NSInteger, ConsentManagerAnswer) {
    ConsentManagerAnswerFullApproval        = 1,
    ConsentManagerAnswerPartialApproval     = 2,
    ConsentManagerAnswerRefusal             = 3,
    ConsentManagerAnswerNoAnswer            = 4
};

typedef NS_OPTIONS(NSUInteger, ConsentManagerSpecialFeature) {
    ConsentManagerSpecialFeaturePreciseGeolocation   = 1 << 0
};

typedef void (^AskConsentCompletionBlock)(NSError * _Nullable error,ConsentManagerAnswer answer);
