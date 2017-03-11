

#ifndef __MNCALLCSTPROC_H__
#define __MNCALLCSTPROC_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*****************************************************************************
  1 ����ͷ�ļ�����                            
*****************************************************************************/
#include "vos.h"


#pragma pack(4)

/*****************************************************************************
  2 �궨�� 
*****************************************************************************/


/*****************************************************************************
  3 ö�ٶ��� 
*****************************************************************************/


/*****************************************************************************
  4 ȫ�ֱ�������
*****************************************************************************/


/*****************************************************************************
  5 ��Ϣͷ����
*****************************************************************************/


/*****************************************************************************
  6 ��Ϣ����
*****************************************************************************/


/*****************************************************************************
  7 STRUCT����
*****************************************************************************/


/*****************************************************************************
  8 UNION����
*****************************************************************************/


/*****************************************************************************
  9 OTHERS����
*****************************************************************************/


/*****************************************************************************
  10 ��������
*****************************************************************************/

extern VOS_VOID  MN_CALL_ProcCstErrorInd(
    const VOS_VOID                      *pMsg
);


extern VOS_VOID  MN_CALL_ProcCstSetupCnf(
    const VOS_VOID                      *pMsg
);


extern VOS_VOID  MN_CALL_SendCstSetupReqMsg(
    VOS_UINT8                           ucCallId
);



extern VOS_VOID  MN_CALL_SendCstRelReqMsg(
    VOS_UINT8                           ucCallId
);




#if (VOS_OS_VER == VOS_WIN32)
#pragma pack()
#else
#pragma pack(0)
#endif




#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of MnCallCstProc.h */