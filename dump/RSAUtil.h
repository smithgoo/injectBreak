//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@interface RSAUtil : UIViewController
{
}

+ (id)decryptData:(id)arg1 publicKey:(id)arg2;
+ (id)decryptString:(id)arg1 publicKey:(id)arg2;
+ (id)encryptData:(id)arg1 publicKey:(id)arg2;
+ (id)encryptString:(id)arg1 publicKey:(id)arg2;
+ (id)decryptData:(id)arg1 privateKey:(id)arg2;
+ (id)decryptString:(id)arg1 privateKey:(id)arg2;
+ (id)decryptData:(id)arg1 withKeyRef:(struct __SecKey *)arg2;
+ (id)encryptData:(id)arg1 privateKey:(id)arg2;
+ (id)encryptString:(id)arg1 privateKey:(id)arg2;
+ (id)encryptData:(id)arg1 withKeyRef:(struct __SecKey *)arg2;
+ (struct __SecKey *)addPrivateKey:(id)arg1;
+ (struct __SecKey *)addPublicKey:(id)arg1;
+ (id)stripPrivateKeyHeader:(id)arg1;
+ (id)stripPublicKeyHeader:(id)arg1;

@end

