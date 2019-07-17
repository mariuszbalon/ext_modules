/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: SIM_8DI
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-07-17/mariuszbalon1 - null - 
 *************************************************************************/

#include "SIM_8DI.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "SIM_8DI_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_SIM_8DI, g_nStringIdSIM_8DI)

const CStringDictionary::TStringId FORTE_SIM_8DI::scm_anDataOutputNames[] = {g_nStringIdSTATE};

const CStringDictionary::TStringId FORTE_SIM_8DI::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TForteInt16 FORTE_SIM_8DI::scm_anEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_SIM_8DI::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_SIM_8DI::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_SIM_8DI::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_SIM_8DI::scm_anEventOutputNames[] = {g_nStringIdINITO};

const SFBInterfaceSpec FORTE_SIM_8DI::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  0,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  0,  0, 0, 
  1,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


const SCFB_FBInstanceData FORTE_SIM_8DI::scm_astInternalFBs[] = {
  {g_nStringIdE_SWITCH, g_nStringIdE_SWITCH},
  {g_nStringIdE_SR, g_nStringIdE_SR},
};

const SCFB_FBConnectionData FORTE_SIM_8DI::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SR, g_nStringIdEO), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SWITCH, g_nStringIdEO0), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SR, g_nStringIdS), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SWITCH, g_nStringIdEO1), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SR, g_nStringIdR), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SWITCH, g_nStringIdEI), 0},
};

const SCFB_FBConnectionData FORTE_SIM_8DI::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SR, g_nStringIdQ), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdSTATE), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_SIM_8DI::scm_astFannedOutDataConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SWITCH, g_nStringIdG), 0},
};

const SCFB_FBNData FORTE_SIM_8DI::scm_stFBNData = {
  2, scm_astInternalFBs,
  4, scm_astEventConnections,
  0, 0,
  1, scm_astDataConnections,
  1, scm_astFannedOutDataConnections,
  0, 0
};


