// $Id$

AliMuonEffMC* AddTaskMuonEffMC(Bool_t IsMc = kTRUE,
			       Int_t PlotMode = 1, 
			       TString centralityEstimator = "V0M",
			       const char* maskKind = "wPdca",
			       UInt_t MuonMask = AliMuonTrackCuts::kMuEta | AliMuonTrackCuts::kMuThetaAbs | AliMuonTrackCuts::kMuPdca | AliMuonTrackCuts::kMuMatchApt,
			       const Int_t NEtaBins = 160,
			       const Int_t NpTBins = 50,
			       const Int_t NCentBins = 1,
			       const Int_t NZvtxBins = 1,
			       const Int_t NPhiBins = 12,
			       const char* outputFileName = 0,
			       const char* folderName = "Muon_TrkEff")
{
  // Get the pointer to the existing analysis manager via the static access method.
  //==============================================================================
  AliAnalysisManager *mgr = AliAnalysisManager::GetAnalysisManager();
  if (!mgr)
  {
    ::Error("AddTaskSOH", "No analysis manager to connect to.");
    return NULL;
  }  
  
  // Check the analysis type using the event handlers connected to the analysis manager.
  //==============================================================================
  if (!mgr->GetInputEventHandler())
  {
    ::Error("AddTaskSOH", "This task requires an input event handler");
    return NULL;
  }

  //-------------------------------------------------------
  // Init the task and do settings
  //-------------------------------------------------------

  AliMuonEffMC *MuonEff = new AliMuonEffMC("MuonEffMC");

  MuonEff->SetMcAna(IsMc);
  MuonEff->SetMuonCutMask(MuonMask);
  MuonEff->SetPlotMode(PlotMode);
  MuonEff->SetCentEstimator(centralityEstimator);
  MuonEff->SetNEtaBins(NEtaBins);
  MuonEff->SetNpTBins(NpTBins);
  MuonEff->SetNCentBins(NCentBins);
  MuonEff->SetNZvtxBins(NZvtxBins);
  MuonEff->SetNPhiBins(NPhiBins);
  MuonEff->SelectCollisionCandidates(AliVEvent::kAnyINT);

  // Add task(s)
  mgr->AddTask(MuonEff); 

  // Create containers for input/output
  if (!outputFileName) 
    outputFileName = AliAnalysisManager::GetCommonFileName();

  const char* ModeTitle[5] = {"GenFM", "GenPP", "RecFM", "RecPP", "Rec"};
  AliAnalysisDataContainer *cinput = mgr->GetCommonInputContainer();
  AliAnalysisDataContainer *coutputpt = mgr->CreateContainer(Form("MuonEff_%s_%s",centralityEstimator.Data(), ModeTitle[PlotMode]), 
                                                             TList::Class(), 
                                                             AliAnalysisManager::kOutputContainer, 
                                                             Form("%s:%s", outputFileName, folderName));
  // Connect input/output
  mgr->ConnectInput(MuonEff, 0, cinput);
  mgr->ConnectOutput(MuonEff, 1, coutputpt);

  return MuonEff;
}
