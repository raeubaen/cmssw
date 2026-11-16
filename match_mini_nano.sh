python3 match_mini_nano_regression.py   --mini EgRegresTrainerLegacy-140X/PhotonRegressionFriend.root   --nano PhotonRegressionNano.root   --output MiniNanoPhotonComparison.root

python3 plot_mini_nano_diff.py   --input MiniNanoPhotonComparison.root   --root-output normalized_feature_differences.root   --pdf-output normalized_feature_differences.pdf

