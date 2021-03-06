// Class: ReadBDT_Default_LHC19c2a_6_8
// Automatically generated by MethodBase::MakeClass
//

/* configuration options =====================================================

#GEN -*-*-*-*-*-*-*-*-*-*-*- general info -*-*-*-*-*-*-*-*-*-*-*-

Method         : BDT::BDT
TMVA Release   : 4.2.1         [262657]
ROOT Release   : 6.16/00       [397312]
Creator        : alici
Date           : Fri Apr 19 11:29:30 2019
Host           : Linux alientest06.cern.ch 4.4.0-57-generic #78-Ubuntu SMP Fri Dec 9 23:50:32 UTC 2016 x86_64 x86_64 x86_64 GNU/Linux
Dir            : /alistorage/alici/analisi/lambdaC/2019
Training events: 416148
Analysis type  : [Classification]


#OPT -*-*-*-*-*-*-*-*-*-*-*-*- options -*-*-*-*-*-*-*-*-*-*-*-*-

# Set by User:
V: "False" [Verbose output (short form of "VerbosityLevel" below - overrides the latter one)]
H: "False" [Print method-specific help message]
NTrees: "850" [Number of trees in the forest]
MaxDepth: "3" [Max depth of the decision tree allowed]
MinNodeSize: "2.5%" [Minimum percentage of training events required in a leaf node (default: Classification: 5%, Regression: 0.2%)]
nCuts: "20" [Number of grid points in variable range used in finding optimal cut in node splitting]
BoostType: "AdaBoost" [Boosting type for the trees in the forest (note: AdaCost is still experimental)]
UseBaggedBoost: "True" [Use only a random subsample of all events for growing the trees in each boost iteration.]
AdaBoostBeta: "5.000000e-01" [Learning rate  for AdaBoost algorithm]
BaggedSampleFraction: "5.000000e-01" [Relative size of bagged event sample to original size of the data sample (used whenever bagging is used (i.e. UseBaggedBoost, Bagging,)]
SeparationType: "giniindex" [Separation criterion for node splitting]
# Default:
VerbosityLevel: "Default" [Verbosity level]
VarTransform: "None" [List of variable transformations performed before training, e.g., "D_Background,P_Signal,G,N_AllClasses" for: "Decorrelation, PCA-transformation, Gaussianisation, Normalisation, each for the given class of events ('AllClasses' denotes all events of all classes, if no class indication is given, 'All' is assumed)"]
CreateMVAPdfs: "False" [Create PDFs for classifier outputs (signal and background)]
IgnoreNegWeightsInTraining: "False" [Events with negative weights are ignored in the training (but are included for testing and performance evaluation)]
AdaBoostR2Loss: "quadratic" [Type of Loss function in AdaBoostR2]
Shrinkage: "1.000000e+00" [Learning rate for BoostType=Grad algorithm]
UseRandomisedTrees: "False" [Determine at each node splitting the cut variable only as the best out of a random subset of variables (like in RandomForests)]
UseNvars: "3" [Size of the subset of variables used with RandomisedTree option]
UsePoissonNvars: "True" [Interpret "UseNvars" not as fixed number but as mean of a Poisson distribution in each split with RandomisedTree option]
UseYesNoLeaf: "True" [Use Sig or Bkg categories, or the purity=S/(S+B) as classification of the leaf node -> Real-AdaBoost]
NegWeightTreatment: "inverseboostnegweights" [How to treat events with negative weights in the BDT training (particular the boosting) : IgnoreInTraining;  Boost With inverse boostweight; Pair events with negative and positive weights in training sample and *annihilate* them (experimental!)]
Css: "1.000000e+00" [AdaCost: cost of true signal selected signal]
Cts_sb: "1.000000e+00" [AdaCost: cost of true signal selected bkg]
Ctb_ss: "1.000000e+00" [AdaCost: cost of true bkg    selected signal]
Cbb: "1.000000e+00" [AdaCost: cost of true bkg    selected bkg ]
NodePurityLimit: "5.000000e-01" [In boosting/pruning, nodes with purity > NodePurityLimit are signal; background otherwise.]
RegressionLossFunctionBDTG: "huber" [Loss function for BDTG regression.]
HuberQuantile: "7.000000e-01" [In the Huber loss function this is the quantile that separates the core from the tails in the residuals distribution.]
DoBoostMonitor: "False" [Create control plot with ROC integral vs tree number]
UseFisherCuts: "False" [Use multivariate splits using the Fisher criterion]
MinLinCorrForFisher: "8.000000e-01" [The minimum linear correlation between two variables demanded for use in Fisher criterion in node splitting]
UseExclusiveVars: "False" [Variables already used in fisher criterion are not anymore analysed individually for node splitting]
DoPreselection: "False" [and and apply automatic pre-selection for 100% efficient signal (bkg) cuts prior to training]
SigToBkgFraction: "1.000000e+00" [Sig to Bkg ratio used in Training (similar to NodePurityLimit, which cannot be used in real adaboost]
PruneMethod: "nopruning" [Note: for BDTs use small trees (e.g.MaxDepth=3) and NoPruning:  Pruning: Method used for pruning (removal) of statistically insignificant branches ]
PruneStrength: "0.000000e+00" [Pruning strength]
PruningValFraction: "5.000000e-01" [Fraction of events to use for optimizing automatic pruning.]
SkipNormalization: "False" [Skip normalization at initialization, to keep expectation value of BDT output according to the fraction of events]
nEventsMin: "0" [deprecated: Use MinNodeSize (in % of training events) instead]
UseBaggedGrad: "False" [deprecated: Use *UseBaggedBoost* instead:  Use only a random subsample of all events for growing the trees in each iteration.]
GradBaggingFraction: "5.000000e-01" [deprecated: Use *BaggedSampleFraction* instead: Defines the fraction of events to be used in each iteration, e.g. when UseBaggedGrad=kTRUE. ]
UseNTrainEvents: "0" [deprecated: Use *BaggedSampleFraction* instead: Number of randomly picked training events used in randomised (and bagged) trees]
NNodesMax: "0" [deprecated: Use MaxDepth instead to limit the tree size]
##


#VAR -*-*-*-*-*-*-*-*-*-*-*-* variables *-*-*-*-*-*-*-*-*-*-*-*-

NVar 9
massK0S                       massK0S                       massK0S                       massK0S                                                         'F'    [0.487614005804,0.507613956928]
tImpParBach                   tImpParBach                   tImpParBach                   tImpParBach                                                     'F'    [-0.499213248491,0.498806059361]
tImpParV0                     tImpParV0                     tImpParV0                     tImpParV0                                                       'F'    [-1.49991941452,1.49977707863]
bachelorPt                    bachelorPt                    bachelorPt                    bachelorPt                                                      'F'    [0.710735201836,7.56706905365]
combinedProtonProb            combinedProtonProb            combinedProtonProb            combinedProtonProb                                              'F'    [5.85193174629e-06,0.999996542931]
DecayLengthK0S*0.497/v0P      CtK0S                         CtK0S                         CtK0S                                                           'F'    [0.0992927849293,96.1435546875]
cosPAK0S                      cosPAK0S                      cosPAK0S                      cosPAK0S                                                        'F'    [0.990001142025,1]
CosThetaStar                  CosThetaStar                  CosThetaStar                  CosThetaStar                                                    'F'    [-0.999971210957,0.997458875179]
signd0                        signd0                        signd0                        signd0                                                          'F'    [3.822085759e-09,0.499213248491]
NSpec 21
massLc2K0Sp                   massLc2K0Sp                   massLc2K0Sp                   mass Lc-->K0S+p               units                             'F'    [2.08646035194,2.48645973206]
LcPt                          LcPt                          LcPt                          Lc Pt                         units                             'F'    [6.00000095367,7.99998521805]
massLc2Lambdapi               massLc2Lambdapi               massLc2Lambdapi               mass Lc -->L(1520)+pi         units                             'F'    [1.25711762905,3.96905446053]
massLambda                    massLambda                    massLambda                    mass V0 = Lambda              units                             'F'    [1.1206856966,2.35429382324]
massLambdaBar                 massLambdaBar                 massLambdaBar                 mass V0 = LambdaBar           units                             'F'    [1.12068033218,2.35024094582]
cosPAK0S                      cosPAK0S                      cosPAK0S                      cosPointingAngle K0S          units                             'F'    [0.990001142025,1]
V0positivePt                  V0positivePt                  V0positivePt                  V0 positive Pt                units                             'F'    [0.113631173968,5.78083992004]
V0negativePt                  V0negativePt                  V0negativePt                  V0 negative Pt                units                             'F'    [0.109578825533,5.69291830063]
dcaV0pos                      dcaV0pos                      dcaV0pos                      dca V0 positive               units                             'F'    [0.100000977516,77.3896865845]
dcaV0neg                      dcaV0neg                      dcaV0neg                      dca V0 negative               units                             'F'    [0.100000225008,82.0507278442]
massGamma                     massGamma                     massGamma                      mass V0 = Gamma              units                             'F'    [0.298718482256,0.423971682787]
ptArm                         ptArm                         ptArm                         pt Arm-Pod                    units                             'F'    [0.106743857265,0.211984142661]
alphaArm                      alphaArm                      alphaArm                      alpha Arm-Pod                 units                             'F'    [-0.894930183887,0.887875139713]
v0Pt                          v0Pt                          v0Pt                          K0S Pt                        units                             'F'    [0.500001907349,6.94207715988]
dcaV0                         dcaV0                         dcaV0                         dca V0                        units                             'F'    [3.48469093581e-08,0.399997234344]
V0positiveEta                 V0positiveEta                 V0positiveEta                 V0pos Eta                     units                             'F'    [-0.799986898899,0.799994528294]
V0negativeEta                 V0negativeEta                 V0negativeEta                 V0neg Eta                     units                             'F'    [-0.799998700619,0.799990773201]
bachelorEta                   bachelorEta                   bachelorEta                   eta bachelor                  units                             'F'    [-0.79999423027,0.799999594688]
nSigmaTOFpr                   nSigmaTOFpr                   nSigmaTOFpr                   nSigma TOF proton prob        units                             'F'    [-2.99999070168,2.99994635582]
nSigmaTPCpr                   nSigmaTPCpr                   nSigmaTPCpr                   nSigma TPC proton prob        units                             'F'    [-4.732442379,3.14408230782]
centrality                    centrality                    centrality                    centrality                    units                             'F'    [0.15000000596,9.94999980927]


============================================================================ */

#ifndef ReadBDT_Default_LHC19c2a_6_8_H
#define ReadBDT_Default_LHC19c2a_6_8_H

#include <vector>
#include <cmath>
#include <string>
#include <iostream>
#include "IClassifierReader.h"
#include "BDTNode.h"

// Default constructor added by ALICE analyzers
class ReadBDT_Default_LHC19c2a_6_8 : public IClassifierReader
{

public:
  // constructor
  ReadBDT_Default_LHC19c2a_6_8()
      : IClassifierReader(),
        fClassName("ReadBDT_Default_LHC19c2a_6_8"),
        fNvars(9),
        fIsNormalised(false)
  {
    for (int i = 9; i--;)
    {
      fVmin[i] = fVmax[i] = 0;
      fType[i] = 0;
    }
    fForest.clear();
    fBoostWeights.clear();
  }

  ReadBDT_Default_LHC19c2a_6_8(std::vector<std::string> &theInputVars)
      : IClassifierReader(),
        fClassName("ReadBDT_Default_LHC19c2a_6_8"),
        fNvars(9),
        fIsNormalised(false)
  {
    // the training input variables
    const char *inputVars[] = {"massK0S", "tImpParBach", "tImpParV0", "bachelorPt", "combinedProtonProb", "DecayLengthK0S*0.497/v0P", "cosPAK0S", "CosThetaStar", "signd0"};

    // sanity checks
    if (theInputVars.size() <= 0)
    {
      std::cout << "Problem in class \"" << fClassName << "\": empty input vector" << std::endl;
      fStatusIsClean = false;
    }

    if (theInputVars.size() != fNvars)
    {
      std::cout << "Problem in class \"" << fClassName << "\": mismatch in number of input values: "
                << theInputVars.size() << " != " << fNvars << std::endl;
      fStatusIsClean = false;
    }

    // validate input variables
    for (size_t ivar = 0; ivar < theInputVars.size(); ivar++)
    {
      if (theInputVars[ivar] != inputVars[ivar])
      {
        std::cout << "Problem in class \"" << fClassName << "\": mismatch in input variable names" << std::endl
                  << " for variable [" << ivar << "]: " << theInputVars[ivar].c_str() << " != " << inputVars[ivar] << std::endl;
        fStatusIsClean = false;
      }
    }

    // initialize min and max vectors (for normalisation)
    fVmin[0] = 0;
    fVmax[0] = 0;
    fVmin[1] = 0;
    fVmax[1] = 0;
    fVmin[2] = 0;
    fVmax[2] = 0;
    fVmin[3] = 0;
    fVmax[3] = 0;
    fVmin[4] = 0;
    fVmax[4] = 0;
    fVmin[5] = 0;
    fVmax[5] = 0;
    fVmin[6] = 0;
    fVmax[6] = 0;
    fVmin[7] = 0;
    fVmax[7] = 0;
    fVmin[8] = 0;
    fVmax[8] = 0;

    // initialize input variable types
    fType[0] = 'F';
    fType[1] = 'F';
    fType[2] = 'F';
    fType[3] = 'F';
    fType[4] = 'F';
    fType[5] = 'F';
    fType[6] = 'F';
    fType[7] = 'F';
    fType[8] = 'F';

    // initialize constants
    Initialize();
  }

  // destructor
  virtual ~ReadBDT_Default_LHC19c2a_6_8()
  {
    Clear(); // method-specific
  }

  // the classifier response
  // "inputValues" is a vector of input values in the same order as the
  // variables given to the constructor
  double GetMvaValue(const std::vector<double> &inputValues) const;

private:
  // method-specific destructor
  void Clear();

  // common member variables
  std::string fClassName; // changed to "std::string" from "const char*" by ALICE analyzers

  const size_t fNvars;
  size_t GetNvar() const { return fNvars; }
  char GetType(int ivar) const { return fType[ivar]; }

  // normalisation of input variables
  const bool fIsNormalised;
  bool IsNormalised() const { return fIsNormalised; }
  double fVmin[9];
  double fVmax[9];
  double NormVariable(double x, double xmin, double xmax) const
  {
    // normalise to output range: [-1, 1]
    return 2 * (x - xmin) / (xmax - xmin) - 1.0;
  }

  // type of input variable: 'F' or 'I'
  char fType[9];

  // initialize internal variables
  void Initialize();
  double GetMvaValue__(const std::vector<double> &inputValues) const;

  // private members (method specific)
  std::vector<BDTNode *> fForest; // i.e. root nodes of decision trees
  std::vector<double> fBoostWeights;      // the weights applied in the individual boosts
};

#endif
