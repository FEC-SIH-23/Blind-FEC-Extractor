// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only


#ifndef SBK_QTLOCATION_PYTHON_H
#define SBK_QTLOCATION_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <sbkconverter.h>
// Module Includes
#include <pyside6_qtcore_python.h>
#include <pyside6_qtpositioning_python.h>

// Bound library includes
#include <QtLocation/qgeocodereply.h>
#include <QtLocation/qgeomaneuver.h>
#include <QtLocation/qgeoroutereply.h>
#include <QtLocation/qgeorouterequest.h>
#include <QtLocation/qgeoserviceprovider.h>
#include <QtLocation/qplacecontent.h>
#include <QtLocation/qplaceidreply.h>
#include <QtLocation/qplacereply.h>
#include <QtLocation/qplacesearchrequest.h>
#include <QtLocation/qplacesearchresult.h>
class QGeoCodingManager;
class QGeoCodingManagerEngine;
class QGeoRoute;
class QGeoRouteSegment;
class QGeoRoutingManager;
class QGeoRoutingManagerEngine;
class QGeoServiceProviderFactory;
class QPlace;
class QPlaceAttribute;
class QPlaceCategory;
class QPlaceContactDetail;
class QPlaceContentReply;
class QPlaceContentRequest;
class QPlaceDetailsReply;
class QPlaceIcon;
class QPlaceManager;
class QPlaceManagerEngine;
class QPlaceMatchReply;
class QPlaceMatchRequest;
class QPlaceProposedSearchResult;
class QPlaceRatings;
class QPlaceResult;
class QPlaceSearchReply;
class QPlaceSearchSuggestionReply;
class QPlaceSupplier;
class QPlaceUser;
// Type indices
enum : int {
    SBK_QGEOCODEREPLY_ERROR_IDX                              = 12,
    SBK_QGEOCODEREPLY_IDX                                    = 11,
    SBK_QGEOCODINGMANAGER_IDX                                = 13,
    SBK_QGEOCODINGMANAGERENGINE_IDX                          = 14,
    SBK_QGEOMANEUVER_INSTRUCTIONDIRECTION_IDX                = 16,
    SBK_QGEOMANEUVER_IDX                                     = 15,
    SBK_QGEOROUTE_IDX                                        = 17,
    SBK_QGEOROUTEREPLY_ERROR_IDX                             = 19,
    SBK_QGEOROUTEREPLY_IDX                                   = 18,
    SBK_QGEOROUTEREQUEST_TRAVELMODE_IDX                      = 26,
    SBK_QFLAGS_QGEOROUTEREQUEST_TRAVELMODE_IDX               = 5,
    SBK_QGEOROUTEREQUEST_FEATURETYPE_IDX                     = 21,
    SBK_QFLAGS_QGEOROUTEREQUEST_FEATURETYPE_IDX              = 0,
    SBK_QGEOROUTEREQUEST_FEATUREWEIGHT_IDX                   = 22,
    SBK_QFLAGS_QGEOROUTEREQUEST_FEATUREWEIGHT_IDX            = 1,
    SBK_QGEOROUTEREQUEST_ROUTEOPTIMIZATION_IDX               = 24,
    SBK_QFLAGS_QGEOROUTEREQUEST_ROUTEOPTIMIZATION_IDX        = 3,
    SBK_QGEOROUTEREQUEST_SEGMENTDETAIL_IDX                   = 25,
    SBK_QFLAGS_QGEOROUTEREQUEST_SEGMENTDETAIL_IDX            = 4,
    SBK_QGEOROUTEREQUEST_MANEUVERDETAIL_IDX                  = 23,
    SBK_QFLAGS_QGEOROUTEREQUEST_MANEUVERDETAIL_IDX           = 2,
    SBK_QGEOROUTEREQUEST_IDX                                 = 20,
    SBK_QGEOROUTESEGMENT_IDX                                 = 27,
    SBK_QGEOROUTINGMANAGER_IDX                               = 28,
    SBK_QGEOROUTINGMANAGERENGINE_IDX                         = 29,
    SBK_QGEOSERVICEPROVIDER_ERROR_IDX                        = 31,
    SBK_QGEOSERVICEPROVIDER_ROUTINGFEATURE_IDX               = 36,
    SBK_QFLAGS_QGEOSERVICEPROVIDER_ROUTINGFEATURE_IDX        = 10,
    SBK_QGEOSERVICEPROVIDER_GEOCODINGFEATURE_IDX             = 32,
    SBK_QFLAGS_QGEOSERVICEPROVIDER_GEOCODINGFEATURE_IDX      = 6,
    SBK_QGEOSERVICEPROVIDER_MAPPINGFEATURE_IDX               = 33,
    SBK_QFLAGS_QGEOSERVICEPROVIDER_MAPPINGFEATURE_IDX        = 7,
    SBK_QGEOSERVICEPROVIDER_PLACESFEATURE_IDX                = 35,
    SBK_QFLAGS_QGEOSERVICEPROVIDER_PLACESFEATURE_IDX         = 9,
    SBK_QGEOSERVICEPROVIDER_NAVIGATIONFEATURE_IDX            = 34,
    SBK_QFLAGS_QGEOSERVICEPROVIDER_NAVIGATIONFEATURE_IDX     = 8,
    SBK_QGEOSERVICEPROVIDER_IDX                              = 30,
    SBK_QGEOSERVICEPROVIDERFACTORY_IDX                       = 37,
    SBK_QPLACE_IDX                                           = 38,
    SBK_QPLACEATTRIBUTE_IDX                                  = 39,
    SBK_QPLACECATEGORY_IDX                                   = 40,
    SBK_QPLACECONTACTDETAIL_IDX                              = 41,
    SBK_QPLACECONTENT_TYPE_IDX                               = 44,
    SBK_QPLACECONTENT_DATATAG_IDX                            = 43,
    SBK_QPLACECONTENT_IDX                                    = 42,
    SBK_QPLACECONTENTREPLY_IDX                               = 45,
    SBK_QPLACECONTENTREQUEST_IDX                             = 46,
    SBK_QPLACEDETAILSREPLY_IDX                               = 47,
    SBK_QPLACEICON_IDX                                       = 48,
    SBK_QPLACEIDREPLY_OPERATIONTYPE_IDX                      = 50,
    SBK_QPLACEIDREPLY_IDX                                    = 49,
    SBK_QPLACEMANAGER_IDX                                    = 51,
    SBK_QPLACEMANAGERENGINE_IDX                              = 52,
    SBK_QPLACEMATCHREPLY_IDX                                 = 53,
    SBK_QPLACEMATCHREQUEST_IDX                               = 54,
    SBK_QPLACEPROPOSEDSEARCHRESULT_IDX                       = 55,
    SBK_QPLACERATINGS_IDX                                    = 56,
    SBK_QPLACEREPLY_ERROR_IDX                                = 58,
    SBK_QPLACEREPLY_TYPE_IDX                                 = 59,
    SBK_QPLACEREPLY_IDX                                      = 57,
    SBK_QPLACERESULT_IDX                                     = 60,
    SBK_QPLACESEARCHREPLY_IDX                                = 61,
    SBK_QPLACESEARCHREQUEST_RELEVANCEHINT_IDX                = 63,
    SBK_QPLACESEARCHREQUEST_IDX                              = 62,
    SBK_QPLACESEARCHRESULT_SEARCHRESULTTYPE_IDX              = 65,
    SBK_QPLACESEARCHRESULT_IDX                               = 64,
    SBK_QPLACESEARCHSUGGESTIONREPLY_IDX                      = 66,
    SBK_QPLACESUPPLIER_IDX                                   = 67,
    SBK_QPLACEUSER_IDX                                       = 68,
    SBK_QtLocation_IDX_COUNT                                 = 69
};
// This variable stores all Python types exported by this module.
extern PyTypeObject **SbkPySide6_QtLocationTypes;

// This variable stores the Python module object exported by this module.
extern PyObject *SbkPySide6_QtLocationModuleObject;

// This variable stores all type converters exported by this module.
extern SbkConverter **SbkPySide6_QtLocationTypeConverters;

// Converter indices
enum : int {
    SBK_QTLOCATION_QLIST_INT_IDX                             = 0, // QList<int>
    SBK_QTLOCATION_QLIST_QPLACECATEGORY_IDX                  = 1, // QList<QPlaceCategory>
    SBK_QTLOCATION_QMAP_QSTRING_QVARIANT_IDX                 = 2, // QMap<QString,QVariant>
    SBK_QTLOCATION_QLIST_QPLACE_IDX                          = 3, // QList<QPlace>
    SBK_QTLOCATION_QLIST_QPLACESEARCHRESULT_IDX              = 4, // QList<QPlaceSearchResult>
    SBK_QTLOCATION_QLIST_QPLACECONTENT_DATATAG_IDX           = 5, // QList<QPlaceContent::DataTag>
    SBK_QTLOCATION_QLIST_QPLACECONTACTDETAIL_IDX             = 6, // QList<QPlaceContactDetail>
    SBK_QTLOCATION_QMAP_INT_QPLACECONTENT_IDX                = 7, // QMap<int,QPlaceContent>
    SBK_QTLOCATION_QLIST_QGEOCOORDINATE_IDX                  = 8, // QList<QGeoCoordinate>
    SBK_QTLOCATION_QLIST_QGEORECTANGLE_IDX                   = 9, // QList<QGeoRectangle>
    SBK_QTLOCATION_QLIST_QGEOROUTEREQUEST_FEATURETYPE_IDX    = 10, // QList<QGeoRouteRequest::FeatureType>
    SBK_QTLOCATION_QLIST_QGEOROUTE_IDX                       = 11, // QList<QGeoRoute>
    SBK_QTLOCATION_QLIST_QGEOROUTESEGMENT_IDX                = 12, // QList<QGeoRouteSegment>
    SBK_QTLOCATION_QLIST_QOBJECTPTR_IDX                      = 13, // QList<QObject*>
    SBK_QTLOCATION_QLIST_QBYTEARRAY_IDX                      = 14, // QList<QByteArray>
    SBK_QTLOCATION_QLIST_QLOCALE_IDX                         = 15, // QList<QLocale>
    SBK_QTLOCATION_QLIST_QGEOLOCATION_IDX                    = 16, // QList<QGeoLocation>
    SBK_QTLOCATION_QLIST_QVARIANT_IDX                        = 17, // QList<QVariant>
    SBK_QTLOCATION_QLIST_QSTRING_IDX                         = 18, // QList<QString>
    SBK_QtLocation_CONVERTERS_IDX_COUNT                      = 19
};
// Macros for type check

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject *SbkType< ::QGeoCodeReply::Error >() { return SbkPySide6_QtLocationTypes[SBK_QGEOCODEREPLY_ERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoCodeReply >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtLocationTypes[SBK_QGEOCODEREPLY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoCodingManager >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtLocationTypes[SBK_QGEOCODINGMANAGER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoCodingManagerEngine >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtLocationTypes[SBK_QGEOCODINGMANAGERENGINE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoManeuver::InstructionDirection >() { return SbkPySide6_QtLocationTypes[SBK_QGEOMANEUVER_INSTRUCTIONDIRECTION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoManeuver >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtLocationTypes[SBK_QGEOMANEUVER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoRoute >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtLocationTypes[SBK_QGEOROUTE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoRouteReply::Error >() { return SbkPySide6_QtLocationTypes[SBK_QGEOROUTEREPLY_ERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoRouteReply >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtLocationTypes[SBK_QGEOROUTEREPLY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoRouteRequest::TravelMode >() { return SbkPySide6_QtLocationTypes[SBK_QGEOROUTEREQUEST_TRAVELMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QGeoRouteRequest::TravelMode> >() { return SbkPySide6_QtLocationTypes[SBK_QFLAGS_QGEOROUTEREQUEST_TRAVELMODE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoRouteRequest::FeatureType >() { return SbkPySide6_QtLocationTypes[SBK_QGEOROUTEREQUEST_FEATURETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QGeoRouteRequest::FeatureType> >() { return SbkPySide6_QtLocationTypes[SBK_QFLAGS_QGEOROUTEREQUEST_FEATURETYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoRouteRequest::FeatureWeight >() { return SbkPySide6_QtLocationTypes[SBK_QGEOROUTEREQUEST_FEATUREWEIGHT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QGeoRouteRequest::FeatureWeight> >() { return SbkPySide6_QtLocationTypes[SBK_QFLAGS_QGEOROUTEREQUEST_FEATUREWEIGHT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoRouteRequest::RouteOptimization >() { return SbkPySide6_QtLocationTypes[SBK_QGEOROUTEREQUEST_ROUTEOPTIMIZATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QGeoRouteRequest::RouteOptimization> >() { return SbkPySide6_QtLocationTypes[SBK_QFLAGS_QGEOROUTEREQUEST_ROUTEOPTIMIZATION_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoRouteRequest::SegmentDetail >() { return SbkPySide6_QtLocationTypes[SBK_QGEOROUTEREQUEST_SEGMENTDETAIL_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QGeoRouteRequest::SegmentDetail> >() { return SbkPySide6_QtLocationTypes[SBK_QFLAGS_QGEOROUTEREQUEST_SEGMENTDETAIL_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoRouteRequest::ManeuverDetail >() { return SbkPySide6_QtLocationTypes[SBK_QGEOROUTEREQUEST_MANEUVERDETAIL_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QGeoRouteRequest::ManeuverDetail> >() { return SbkPySide6_QtLocationTypes[SBK_QFLAGS_QGEOROUTEREQUEST_MANEUVERDETAIL_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoRouteRequest >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtLocationTypes[SBK_QGEOROUTEREQUEST_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoRouteSegment >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtLocationTypes[SBK_QGEOROUTESEGMENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoRoutingManager >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtLocationTypes[SBK_QGEOROUTINGMANAGER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoRoutingManagerEngine >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtLocationTypes[SBK_QGEOROUTINGMANAGERENGINE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoServiceProvider::Error >() { return SbkPySide6_QtLocationTypes[SBK_QGEOSERVICEPROVIDER_ERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoServiceProvider::RoutingFeature >() { return SbkPySide6_QtLocationTypes[SBK_QGEOSERVICEPROVIDER_ROUTINGFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QGeoServiceProvider::RoutingFeature> >() { return SbkPySide6_QtLocationTypes[SBK_QFLAGS_QGEOSERVICEPROVIDER_ROUTINGFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoServiceProvider::GeocodingFeature >() { return SbkPySide6_QtLocationTypes[SBK_QGEOSERVICEPROVIDER_GEOCODINGFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QGeoServiceProvider::GeocodingFeature> >() { return SbkPySide6_QtLocationTypes[SBK_QFLAGS_QGEOSERVICEPROVIDER_GEOCODINGFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoServiceProvider::MappingFeature >() { return SbkPySide6_QtLocationTypes[SBK_QGEOSERVICEPROVIDER_MAPPINGFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QGeoServiceProvider::MappingFeature> >() { return SbkPySide6_QtLocationTypes[SBK_QFLAGS_QGEOSERVICEPROVIDER_MAPPINGFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoServiceProvider::PlacesFeature >() { return SbkPySide6_QtLocationTypes[SBK_QGEOSERVICEPROVIDER_PLACESFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QGeoServiceProvider::PlacesFeature> >() { return SbkPySide6_QtLocationTypes[SBK_QFLAGS_QGEOSERVICEPROVIDER_PLACESFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoServiceProvider::NavigationFeature >() { return SbkPySide6_QtLocationTypes[SBK_QGEOSERVICEPROVIDER_NAVIGATIONFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QFlags<QGeoServiceProvider::NavigationFeature> >() { return SbkPySide6_QtLocationTypes[SBK_QFLAGS_QGEOSERVICEPROVIDER_NAVIGATIONFEATURE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QGeoServiceProvider >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtLocationTypes[SBK_QGEOSERVICEPROVIDER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QGeoServiceProviderFactory >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtLocationTypes[SBK_QGEOSERVICEPROVIDERFACTORY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlace >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtLocationTypes[SBK_QPLACE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceAttribute >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtLocationTypes[SBK_QPLACEATTRIBUTE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceCategory >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtLocationTypes[SBK_QPLACECATEGORY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceContactDetail >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtLocationTypes[SBK_QPLACECONTACTDETAIL_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceContent::Type >() { return SbkPySide6_QtLocationTypes[SBK_QPLACECONTENT_TYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPlaceContent::DataTag >() { return SbkPySide6_QtLocationTypes[SBK_QPLACECONTENT_DATATAG_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPlaceContent >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtLocationTypes[SBK_QPLACECONTENT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceContentReply >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtLocationTypes[SBK_QPLACECONTENTREPLY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceContentRequest >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtLocationTypes[SBK_QPLACECONTENTREQUEST_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceDetailsReply >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtLocationTypes[SBK_QPLACEDETAILSREPLY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceIcon >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtLocationTypes[SBK_QPLACEICON_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceIdReply::OperationType >() { return SbkPySide6_QtLocationTypes[SBK_QPLACEIDREPLY_OPERATIONTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPlaceIdReply >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtLocationTypes[SBK_QPLACEIDREPLY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceManager >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtLocationTypes[SBK_QPLACEMANAGER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceManagerEngine >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtLocationTypes[SBK_QPLACEMANAGERENGINE_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceMatchReply >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtLocationTypes[SBK_QPLACEMATCHREPLY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceMatchRequest >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtLocationTypes[SBK_QPLACEMATCHREQUEST_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceProposedSearchResult >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtLocationTypes[SBK_QPLACEPROPOSEDSEARCHRESULT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceRatings >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtLocationTypes[SBK_QPLACERATINGS_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceReply::Error >() { return SbkPySide6_QtLocationTypes[SBK_QPLACEREPLY_ERROR_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPlaceReply::Type >() { return SbkPySide6_QtLocationTypes[SBK_QPLACEREPLY_TYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPlaceReply >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtLocationTypes[SBK_QPLACEREPLY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceResult >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtLocationTypes[SBK_QPLACERESULT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceSearchReply >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtLocationTypes[SBK_QPLACESEARCHREPLY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceSearchRequest::RelevanceHint >() { return SbkPySide6_QtLocationTypes[SBK_QPLACESEARCHREQUEST_RELEVANCEHINT_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPlaceSearchRequest >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtLocationTypes[SBK_QPLACESEARCHREQUEST_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceSearchResult::SearchResultType >() { return SbkPySide6_QtLocationTypes[SBK_QPLACESEARCHRESULT_SEARCHRESULTTYPE_IDX]; }
template<> inline PyTypeObject *SbkType< ::QPlaceSearchResult >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtLocationTypes[SBK_QPLACESEARCHRESULT_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceSearchSuggestionReply >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtLocationTypes[SBK_QPLACESEARCHSUGGESTIONREPLY_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceSupplier >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtLocationTypes[SBK_QPLACESUPPLIER_IDX]); }
template<> inline PyTypeObject *SbkType< ::QPlaceUser >() { return reinterpret_cast<PyTypeObject *>(SbkPySide6_QtLocationTypes[SBK_QPLACEUSER_IDX]); }

} // namespace Shiboken

QT_WARNING_POP
#endif // SBK_QTLOCATION_PYTHON_H

