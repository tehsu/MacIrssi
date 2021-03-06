/*
 * ITAEMConstants.h
 * 
 * /Applications/iTunes.app
 * osaglue 0.4.0
 *
 */
#import "Appscript/Appscript.h"

// Type/Enum Names
enum {
	kITAudiobooks = 'kSpA',
	kITMP3CD = 'kMCD',
	kITMovies = 'kSpI',
	kITMusic = 'kSpZ',
	kITPartyShuffle = 'kSpS',
	kITPodcasts = 'kSpP',
	kITPurchasedMusic = 'kSpM',
	kITTVShow = 'kVdT',
	kITTVShows = 'kSpT',
	kITVideos = 'kSpV',
	kITAlbumListing = 'kAlb',
	kITAlbums = 'kSrL',
	kITAll = 'kRpA',
	kITApplicationResponses = 'rmte',
	kITArtists = 'kSrR',
	kITAsk = 'ask ',
	kITAudioCD = 'kACD',
	kITCase_ = 'case',
	kITCdInsert = 'kCDi',
	kITComposers = 'kSrC',
	kITComputed = 'kRtC',
	kITDetailed = 'lwdt',
	kITDevice = 'kDev',
	kITDiacriticals = 'diac',
	kITDisplayed = 'kSrV',
	kITExpansion = 'expa',
	kITFastForwarding = 'kPSF',
	kITFolder = 'kSpF',
	kITHyphens = 'hyph',
	kITIPod = 'kPod',
	kITLarge = 'kVSL',
	kITLibrary = 'kLib',
	kITMedium = 'kVSM',
	kITMovie = 'kVdM',
	kITMusicVideo = 'kVdV',
	kITNo = 'no  ',
	kITNone = 'kSpN',
	kITNumericStrings = 'nume',
	kITOff = 'kRpO',
	kITOne = 'kRp1',
	kITPaused = 'kPSp',
	kITPlaying = 'kPSP',
	kITPunctuation = 'punc',
	kITRadioTuner = 'kTun',
	kITRewinding = 'kPSR',
	kITSharedLibrary = 'kShd',
	kITSmall = 'kVSS',
	kITSongs = 'kSrS',
	kITStandard = 'lwst',
	kITStopped = 'kPSS',
	kITTrackListing = 'kTrk',
	kITUnknown = 'kUnk',
	kITUser = 'kRtU',
	kITWhitespace = 'whit',
	kITYes = 'yes ',
	kITApril = 'apr ',
	kITAugust = 'aug ',
	kITDecember = 'dec ',
	kITEPSPicture = 'EPS ',
	kITEQ = 'pEQp',
	kITEQEnabled = 'pEQ ',
	kITEQPreset = 'cEQP',
	kITEQWindow = 'cEQW',
	kITFebruary = 'feb ',
	kITFriday = 'fri ',
	kITGIFPicture = 'GIFf',
	kITJPEGPicture = 'JPEG',
	kITJanuary = 'jan ',
	kITJuly = 'jul ',
	kITJune = 'jun ',
	kITMarch = 'mar ',
	kITMay = 'may ',
	kITMonday = 'mon ',
	kITNovember = 'nov ',
	kITOctober = 'oct ',
	kITPICTPicture = 'PICT',
	kITRGB16Color = 'tr16',
	kITRGB96Color = 'tr96',
	kITRGBColor = 'cRGB',
	kITSaturday = 'sat ',
	kITSeptember = 'sep ',
	kITSunday = 'sun ',
	kITTIFFPicture = 'TIFF',
	kITThursday = 'thu ',
	kITTuesday = 'tue ',
	kITURLTrack = 'cURT',
	kITWednesday = 'wed ',
	kITAddress = 'pURL',
	kITAlbum = 'pAlb',
	kITAlbumArtist = 'pAlA',
	kITAlbumRating = 'pAlR',
	kITAlbumRatingKind = 'pARk',
	kITAlias = 'alis',
	kITAnything = '****',
	kITApplication = 'capp',
	kITApplicationBundleID = 'bund',
	kITApplicationSignature = 'sign',
	kITApplicationURL = 'aprl',
	kITArtist = 'pArt',
	kITArtwork = 'cArt',
	kITAudioCDPlaylist = 'cCDP',
	kITAudioCDTrack = 'cCDT',
	kITBand1 = 'pEQ1',
	kITBand10 = 'pEQ0',
	kITBand2 = 'pEQ2',
	kITBand3 = 'pEQ3',
	kITBand4 = 'pEQ4',
	kITBand5 = 'pEQ5',
	kITBand6 = 'pEQ6',
	kITBand7 = 'pEQ7',
	kITBand8 = 'pEQ8',
	kITBand9 = 'pEQ9',
	kITBest = 'best',
	kITBitRate = 'pBRt',
	kITBookmark = 'pBkt',
	kITBookmarkable = 'pBkm',
	kITBoolean = 'bool',
	kITBoundingRectangle = 'qdrt',
	kITBounds = 'pbnd',
	kITBpm = 'pBPM',
	kITBrowserWindow = 'cBrW',
	kITCapacity = 'capa',
	kITCategory = 'pCat',
	kITCentimeters = 'cmtr',
	kITClassInfo = 'gcli',
	kITClass_ = 'pcls',
	kITCloseable = 'hclb',
	kITCollapseable = 'pWSh',
	kITCollapsed = 'wshd',
	kITCollating = 'lwcl',
	kITColorTable = 'clrt',
	kITComment = 'pCmt',
	kITCompilation = 'pAnt',
	kITComposer = 'pCmp',
	kITContainer = 'ctnr',
	kITCopies = 'lwcp',
	kITCubicCentimeters = 'ccmt',
	kITCubicFeet = 'cfet',
	kITCubicInches = 'cuin',
	kITCubicMeters = 'cmet',
	kITCubicYards = 'cyrd',
	kITCurrentEQPreset = 'pEQP',
	kITCurrentEncoder = 'pEnc',
	kITCurrentPlaylist = 'pPla',
	kITCurrentStreamTitle = 'pStT',
	kITCurrentStreamURL = 'pStU',
	kITCurrentTrack = 'pTrk',
	kITCurrentVisual = 'pVis',
	kITDashStyle = 'tdas',
	kITData = 'rdat',
	kITData_ = 'pPCT',
	kITDatabaseID = 'pDID',
	kITDate = 'ldt ',
	kITDateAdded = 'pAdd',
	kITDecimalStruct = 'decm',
	kITDegreesCelsius = 'degc',
	kITDegreesFahrenheit = 'degf',
	kITDegreesKelvin = 'degk',
	kITDescription_ = 'pDes',
	kITDevicePlaylist = 'cDvP',
	kITDeviceTrack = 'cDvT',
	kITDiscCount = 'pDsC',
	kITDiscNumber = 'pDsN',
	kITDoubleInteger = 'comp',
	kITDownloaded = 'pDlA',
	kITDuration = 'pDur',
	kITElementInfo = 'elin',
	kITEnabled = 'enbl',
	kITEncodedString = 'encs',
	kITEncoder = 'cEnc',
	kITEndingPage = 'lwlp',
	kITEnumerator = 'enum',
	kITEpisodeID = 'pEpD',
	kITEpisodeNumber = 'pEpN',
	kITErrorHandling = 'lweh',
	kITEventInfo = 'evin',
	kITExtendedFloat = 'exte',
	kITFaxNumber = 'faxn',
	kITFeet = 'feet',
	kITFileRef = 'fsrf',
	kITFileSpecification = 'fss ',
	kITFileTrack = 'cFlT',
	kITFileURL = 'furl',
	kITFinish = 'pStp',
	kITFixed = 'fixd',
	kITFixedIndexing = 'pFix',
	kITFixedPoint = 'fpnt',
	kITFixedRectangle = 'frct',
	kITFloat128bit = 'ldbl',
	kITFloat_ = 'doub',
	kITFolderPlaylist = 'cFoP',
	kITFormat = 'pFmt',
	kITFreeSpace = 'frsp',
	kITFrontmost = 'pisf',
	kITFullScreen = 'pFSc',
	kITGallons = 'galn',
	kITGapless = 'pGpl',
	kITGenre = 'pGen',
	kITGrams = 'gram',
	kITGraphicText = 'cgtx',
	kITGrouping = 'pGrp',
	kITId_ = 'ID  ',
	kITInches = 'inch',
	kITIndex = 'pidx',
	kITInteger = 'long',
	kITInternationalText = 'itxt',
	kITInternationalWritingCode = 'intl',
	kITItem = 'cobj',
	kITKernelProcessID = 'kpid',
	kITKilograms = 'kgrm',
	kITKilometers = 'kmtr',
	kITKind = 'pKnd',
	kITLibraryPlaylist = 'cLiP',
	kITList = 'list',
	kITLiters = 'litr',
	kITLocation = 'pLoc',
	kITLocationReference = 'insl',
	kITLongDescription = 'pLds',
	kITLongFixed = 'lfxd',
	kITLongFixedPoint = 'lfpt',
	kITLongFixedRectangle = 'lfrc',
	kITLongPoint = 'lpnt',
	kITLongRectangle = 'lrct',
	kITLyrics = 'pLyr',
	kITMachPort = 'port',
	kITMachine = 'mach',
	kITMachineLocation = 'mLoc',
	kITMeters = 'metr',
	kITMiles = 'mile',
	kITMinimized = 'pMin',
	kITMissingValue = 'msng',
	kITModifiable = 'pMod',
	kITModificationDate = 'asmo',
	kITMute = 'pMut',
	kITName = 'pnam',
	kITNull = 'null',
	kITOunces = 'ozs ',
	kITPagesAcross = 'lwla',
	kITPagesDown = 'lwld',
	kITParameterInfo = 'pmin',
	kITParent = 'pPlP',
	kITPersistentID = 'pPIS',
	kITPixelMapRecord = 'tpmm',
	kITPlayedCount = 'pPlC',
	kITPlayedDate = 'pPlD',
	kITPlayerPosition = 'pPos',
	kITPlayerState = 'pPlS',
	kITPlaylist = 'cPly',
	kITPlaylistWindow = 'cPlW',
	kITPodcast = 'pTPc',
	kITPoint = 'QDpt',
	kITPosition = 'ppos',
	kITPounds = 'lbs ',
	kITPreamp = 'pEQA',
	kITPrintSettings = 'pset',
	kITPrinterFeatures = 'lwpf',
	kITProcessSerialNumber = 'psn ',
	kITProperty = 'prop',
	kITPropertyInfo = 'pinf',
	kITQuarts = 'qrts',
	kITRadioTunerPlaylist = 'cRTP',
	kITRating = 'pRte',
	kITRatingKind = 'pRtk',
	kITRawData = 'pRaw',
	kITRecord = 'reco',
	kITReference = 'obj ',
	kITRequestedPrintTime = 'lwqt',
	kITResizable = 'prsz',
	kITRotation = 'trot',
	kITSampleRate = 'pSRt',
	kITScript = 'scpt',
	kITSeasonNumber = 'pSeN',
	kITSelection = 'sele',
	kITShared = 'pShr',
	kITSharedTrack = 'cShT',
	kITShortFloat = 'sing',
	kITShortInteger = 'shor',
	kITShow = 'pShw',
	kITShufflable = 'pSfa',
	kITShuffle = 'pShf',
	kITSize = 'pSiz',
	kITSkippedCount = 'pSkC',
	kITSkippedDate = 'pSkD',
	kITSmart = 'pSmt',
	kITSongRepeat = 'pRpt',
	kITSortAlbum = 'pSAl',
	kITSortAlbumArtist = 'pSAA',
	kITSortArtist = 'pSAr',
	kITSortComposer = 'pSCm',
	kITSortName = 'pSNm',
	kITSortShow = 'pSSN',
	kITSoundVolume = 'pVol',
	kITSource = 'cSrc',
	kITSpecialKind = 'pSpK',
	kITSquareFeet = 'sqft',
	kITSquareKilometers = 'sqkm',
	kITSquareMeters = 'sqrm',
	kITSquareMiles = 'sqmi',
	kITSquareYards = 'sqyd',
	kITStart = 'pStr',
	kITStartingPage = 'lwfp',
	kITString = 'TEXT',
	kITStyledClipboardText = 'styl',
	kITStyledText = 'STXT',
	kITSuiteInfo = 'suin',
	kITTargetPrinter = 'trpr',
	kITTextStyleInfo = 'tsty',
	kITTime = 'pTim',
	kITTrack = 'cTrk',
	kITTrackCount = 'pTrC',
	kITTrackNumber = 'pTrN',
	kITTypeClass = 'type',
	kITUnicodeText = 'utxt',
	kITUnplayed = 'pUnp',
	kITUnsignedInteger = 'magn',
	kITUpdateTracks = 'pUTC',
	kITUserPlaylist = 'cUsP',
	kITUtf16Text = 'ut16',
	kITUtf8Text = 'utf8',
	kITVersion = 'vers',
	kITVersion_ = 'vers',
	kITVideoKind = 'pVdK',
	kITView = 'pPly',
	kITVisible = 'pvis',
	kITVisual = 'cVis',
	kITVisualSize = 'pVSz',
	kITVisualsEnabled = 'pVsE',
	kITVolumeAdjustment = 'pAdj',
	kITWindow = 'cwin',
	kITWritingCode = 'psct',
	kITYards = 'yard',
	kITYear = 'pYr ',
	kITZoomable = 'iszm',
	kITZoomed = 'pzum',
};

enum {
	eITEQPresets = 'cEQP',
	eITEQWindows = 'cEQW',
	eITURLTracks = 'cURT',
	eITApplication = 'capp',
	eITArtworks = 'cArt',
	eITAudioCDPlaylists = 'cCDP',
	eITAudioCDTracks = 'cCDT',
	eITBrowserWindows = 'cBrW',
	eITDevicePlaylists = 'cDvP',
	eITDeviceTracks = 'cDvT',
	eITEncoders = 'cEnc',
	eITFileTracks = 'cFlT',
	eITFolderPlaylists = 'cFoP',
	eITItems = 'cobj',
	eITLibraryPlaylists = 'cLiP',
	eITPlaylistWindows = 'cPlW',
	eITPlaylists = 'cPly',
	eITPrintSettings = 'pset',
	eITRadioTunerPlaylists = 'cRTP',
	eITSharedTracks = 'cShT',
	eITSources = 'cSrc',
	eITTracks = 'cTrk',
	eITUserPlaylists = 'cUsP',
	eITVisuals = 'cVis',
	eITWindows = 'cwin',
	pITEQ = 'pEQp',
	pITEQEnabled = 'pEQ ',
	pITAddress = 'pURL',
	pITAlbum = 'pAlb',
	pITAlbumArtist = 'pAlA',
	pITAlbumRating = 'pAlR',
	pITAlbumRatingKind = 'pARk',
	pITArtist = 'pArt',
	pITBand1 = 'pEQ1',
	pITBand10 = 'pEQ0',
	pITBand2 = 'pEQ2',
	pITBand3 = 'pEQ3',
	pITBand4 = 'pEQ4',
	pITBand5 = 'pEQ5',
	pITBand6 = 'pEQ6',
	pITBand7 = 'pEQ7',
	pITBand8 = 'pEQ8',
	pITBand9 = 'pEQ9',
	pITBitRate = 'pBRt',
	pITBookmark = 'pBkt',
	pITBookmarkable = 'pBkm',
	pITBounds = 'pbnd',
	pITBpm = 'pBPM',
	pITCapacity = 'capa',
	pITCategory = 'pCat',
	pITClass_ = 'pcls',
	pITCloseable = 'hclb',
	pITCollapseable = 'pWSh',
	pITCollapsed = 'wshd',
	pITCollating = 'lwcl',
	pITComment = 'pCmt',
	pITCompilation = 'pAnt',
	pITComposer = 'pCmp',
	pITContainer = 'ctnr',
	pITCopies = 'lwcp',
	pITCurrentEQPreset = 'pEQP',
	pITCurrentEncoder = 'pEnc',
	pITCurrentPlaylist = 'pPla',
	pITCurrentStreamTitle = 'pStT',
	pITCurrentStreamURL = 'pStU',
	pITCurrentTrack = 'pTrk',
	pITCurrentVisual = 'pVis',
	pITData = 'pPCT',
	pITDatabaseID = 'pDID',
	pITDateAdded = 'pAdd',
	pITDescription_ = 'pDes',
	pITDiscCount = 'pDsC',
	pITDiscNumber = 'pDsN',
	pITDownloaded = 'pDlA',
	pITDuration = 'pDur',
	pITEnabled = 'enbl',
	pITEndingPage = 'lwlp',
	pITEpisodeID = 'pEpD',
	pITEpisodeNumber = 'pEpN',
	pITErrorHandling = 'lweh',
	pITFaxNumber = 'faxn',
	pITFinish = 'pStp',
	pITFixedIndexing = 'pFix',
	pITFormat = 'pFmt',
	pITFreeSpace = 'frsp',
	pITFrontmost = 'pisf',
	pITFullScreen = 'pFSc',
	pITGapless = 'pGpl',
	pITGenre = 'pGen',
	pITGrouping = 'pGrp',
	pITId_ = 'ID  ',
	pITIndex = 'pidx',
	pITKind = 'pKnd',
	pITLocation = 'pLoc',
	pITLongDescription = 'pLds',
	pITLyrics = 'pLyr',
	pITMinimized = 'pMin',
	pITModifiable = 'pMod',
	pITModificationDate = 'asmo',
	pITMute = 'pMut',
	pITName = 'pnam',
	pITPagesAcross = 'lwla',
	pITPagesDown = 'lwld',
	pITParent = 'pPlP',
	pITPersistentID = 'pPIS',
	pITPlayedCount = 'pPlC',
	pITPlayedDate = 'pPlD',
	pITPlayerPosition = 'pPos',
	pITPlayerState = 'pPlS',
	pITPodcast = 'pTPc',
	pITPosition = 'ppos',
	pITPreamp = 'pEQA',
	pITPrinterFeatures = 'lwpf',
	pITRating = 'pRte',
	pITRatingKind = 'pRtk',
	pITRawData = 'pRaw',
	pITRequestedPrintTime = 'lwqt',
	pITResizable = 'prsz',
	pITSampleRate = 'pSRt',
	pITSeasonNumber = 'pSeN',
	pITSelection = 'sele',
	pITShared = 'pShr',
	pITShow = 'pShw',
	pITShufflable = 'pSfa',
	pITShuffle = 'pShf',
	pITSize = 'pSiz',
	pITSkippedCount = 'pSkC',
	pITSkippedDate = 'pSkD',
	pITSmart = 'pSmt',
	pITSongRepeat = 'pRpt',
	pITSortAlbum = 'pSAl',
	pITSortAlbumArtist = 'pSAA',
	pITSortArtist = 'pSAr',
	pITSortComposer = 'pSCm',
	pITSortName = 'pSNm',
	pITSortShow = 'pSSN',
	pITSoundVolume = 'pVol',
	pITSpecialKind = 'pSpK',
	pITStart = 'pStr',
	pITStartingPage = 'lwfp',
	pITTargetPrinter = 'trpr',
	pITTime = 'pTim',
	pITTrackCount = 'pTrC',
	pITTrackNumber = 'pTrN',
	pITUnplayed = 'pUnp',
	pITUpdateTracks = 'pUTC',
	pITVersion_ = 'vers',
	pITVideoKind = 'pVdK',
	pITView = 'pPly',
	pITVisible = 'pvis',
	pITVisualSize = 'pVSz',
	pITVisualsEnabled = 'pVsE',
	pITVolumeAdjustment = 'pAdj',
	pITYear = 'pYr ',
	pITZoomable = 'iszm',
	pITZoomed = 'pzum',
};

enum {
	ecITActivate = 'misc',
	eiITActivate = 'actv',
};

enum {
	ecITAdd = 'hook',
	eiITAdd = 'Add ',
	epITTo = 'insh',
};

enum {
	ecITBackTrack = 'hook',
	eiITBackTrack = 'Back',
};

enum {
	ecITClose = 'core',
	eiITClose = 'clos',
};

enum {
	ecITConvert = 'hook',
	eiITConvert = 'Conv',
};

enum {
	ecITCount = 'core',
	eiITCount = 'cnte',
	epITEach = 'kocl',
};

enum {
	ecITDelete = 'core',
	eiITDelete = 'delo',
};

enum {
	ecITDownload = 'hook',
	eiITDownload = 'Dwnl',
};

enum {
	ecITDuplicate = 'core',
	eiITDuplicate = 'clon',
// 	epITTo = 'insh',
};

enum {
	ecITEject = 'hook',
	eiITEject = 'Ejct',
};

enum {
	ecITExists = 'core',
	eiITExists = 'doex',
};

enum {
	ecITFastForward = 'hook',
	eiITFastForward = 'Fast',
};

enum {
	ecITGet = 'core',
	eiITGet = 'getd',
};

enum {
	ecITLaunch = 'ascr',
	eiITLaunch = 'noop',
};

enum {
	ecITMake = 'core',
	eiITMake = 'crel',
	epITAt = 'insh',
	epITNew_ = 'kocl',
	epITWithProperties = 'prdt',
};

enum {
	ecITMove = 'core',
	eiITMove = 'move',
// 	epITTo = 'insh',
};

enum {
	ecITNextTrack = 'hook',
	eiITNextTrack = 'Next',
};

enum {
	ecITOpen = 'aevt',
	eiITOpen = 'odoc',
};

enum {
	ecITOpenLocation = 'GURL',
	eiITOpenLocation = 'GURL',
};

enum {
	ecITPause = 'hook',
	eiITPause = 'Paus',
};

enum {
	ecITPlay = 'hook',
	eiITPlay = 'Play',
	epITOnce = 'POne',
};

enum {
	ecITPlaypause = 'hook',
	eiITPlaypause = 'PlPs',
};

enum {
	ecITPreviousTrack = 'hook',
	eiITPreviousTrack = 'Prev',
};

enum {
	ecITPrint = 'aevt',
	eiITPrint = 'pdoc',
	epITKind = 'pKnd',
	epITPrintDialog = 'pdlg',
	epITTheme = 'pThm',
// 	epITWithProperties = 'prdt',
};

enum {
	ecITQuit = 'aevt',
	eiITQuit = 'quit',
};

enum {
	ecITRefresh = 'hook',
	eiITRefresh = 'Rfrs',
};

enum {
	ecITReopen = 'aevt',
	eiITReopen = 'rapp',
};

enum {
	ecITResume = 'hook',
	eiITResume = 'Resu',
};

enum {
	ecITReveal = 'hook',
	eiITReveal = 'Revl',
};

enum {
	ecITRewind = 'hook',
	eiITRewind = 'Rwnd',
};

enum {
	ecITRun = 'aevt',
	eiITRun = 'oapp',
};

enum {
	ecITSearch = 'hook',
	eiITSearch = 'Srch',
	epITFor_ = 'pTrm',
	epITOnly = 'pAre',
};

enum {
	ecITSet = 'core',
	eiITSet = 'setd',
// 	epITTo = 'data',
};

enum {
	ecITStop = 'hook',
	eiITStop = 'Stop',
};

enum {
	ecITSubscribe = 'hook',
	eiITSubscribe = 'pSub',
};

enum {
	ecITUpdate = 'hook',
	eiITUpdate = 'Updt',
};

enum {
	ecITUpdateAllPodcasts = 'hook',
	eiITUpdateAllPodcasts = 'Updp',
};

enum {
	ecITUpdatePodcast = 'hook',
	eiITUpdatePodcast = 'Upd1',
};

