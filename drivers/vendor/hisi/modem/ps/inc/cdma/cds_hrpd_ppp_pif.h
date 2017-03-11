/** ****************************************************************************

                    Huawei Technologies Sweden AB (C), 2001-2011

 ********************************************************************************
 * @author    Automatically generated by DAISY
 * @version
 * @date      2014-10-24
 * @file
 * @brief
 * Here defines CDS and HRPD PPP interface. 
 * The interface provided by CDS will put here. The interface provided by PPP
 * will in other header files, but #included by this file.
 * @copyright Huawei Technologies Sweden AB
 *******************************************************************************/
#ifndef CDS_HRPD_PPP_PIF_H
#define CDS_HRPD_PPP_PIF_H


/*******************************************************************************
 1. Other files included
*******************************************************************************/
#include "vos.h"
#include "ppp_trans_data_pif.h"

#ifdef __cplusplus
#if __cplusplus
    extern "C" {
#endif /* __cpluscplus */
#endif /* __cpluscplus */
#pragma pack(4)

/*******************************************************************************
 2. Macro definitions
*******************************************************************************/


/*******************************************************************************
 3. Enumerations declarations
*******************************************************************************/

/*******************************************************************************
 4. Message Header declaration
*******************************************************************************/

/*******************************************************************************
 5. Message declaration
*******************************************************************************/

/*******************************************************************************
 6. STRUCT and UNION declaration
*******************************************************************************/

/*******************************************************************************
 7. OTHER declarations
*******************************************************************************/

/*******************************************************************************
 8. Global  declaration
*******************************************************************************/

/*******************************************************************************
 9. Function declarations
*******************************************************************************/
/** *****************************************************************************
 * Name        : PPPC_HRPD_PullPacketEvent
 *
 * Description : CDS delivers data to PPP queue with this function.PPP
 * needs to free TTF_MEM after sending data to RLP.It will be used both in HRPD and eHRPD mode.
 *
 * @param[in]     pstDlData
 *******************************************************************************/
VOS_VOID PPPC_HRPD_PullPacketEvent(const CDS_CDMA_HRPD_TRANS_DATA_STRU *pstPppSdu);

#if ((VOS_OS_VER == VOS_WIN32) || (VOS_OS_VER == VOS_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif

#ifdef __cplusplus
#if __cplusplus
}
#endif /* __cpluscplus */
#endif /* __cpluscplus */


#endif