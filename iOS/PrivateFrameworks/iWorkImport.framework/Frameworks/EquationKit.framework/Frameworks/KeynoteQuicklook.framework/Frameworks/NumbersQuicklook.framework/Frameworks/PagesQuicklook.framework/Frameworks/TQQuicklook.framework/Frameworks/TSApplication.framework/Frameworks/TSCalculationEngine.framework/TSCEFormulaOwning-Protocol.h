//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSCalculationEngine/NSObject-Protocol.h>

@class TSCECalculationEngine;
@protocol TSCEReferenceResolving;

@protocol TSCEFormulaOwning <NSObject>
- (UUIDData_5fbc143e)ownerUID;
- (void)invalidateForCalcEngine:(TSCECalculationEngine *)arg1;
- (void)writeResultsForCalcEngine:(TSCECalculationEngine *)arg1;
- (long long)evaluationMode;
- (id <TSCEReferenceResolving>)linkedResolver;
- (unsigned short)ownerKind;

@optional
- (struct TSCERecalculationState)multiEvaluateFormulasAt:(const struct TSCECellCoordSet *)arg1 withCalcEngine:(TSCECalculationEngine *)arg2 recalcOptions:(struct TSCERecalculationState)arg3;
- (struct TSCERecalculationState)evaluateFormulaAt:(struct TSUCellCoord)arg1 withCalcEngine:(TSCECalculationEngine *)arg2 recalcOptions:(struct TSCERecalculationState)arg3;
@end

