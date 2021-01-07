/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/cdn/v20180606/model/UpdateDomainConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdn::V20180606::Model;
using namespace rapidjson;
using namespace std;

UpdateDomainConfigRequest::UpdateDomainConfigRequest() :
    m_domainHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_originHasBeenSet(false),
    m_ipFilterHasBeenSet(false),
    m_ipFreqLimitHasBeenSet(false),
    m_statusCodeCacheHasBeenSet(false),
    m_compressionHasBeenSet(false),
    m_bandwidthAlertHasBeenSet(false),
    m_rangeOriginPullHasBeenSet(false),
    m_followRedirectHasBeenSet(false),
    m_errorPageHasBeenSet(false),
    m_requestHeaderHasBeenSet(false),
    m_responseHeaderHasBeenSet(false),
    m_downstreamCappingHasBeenSet(false),
    m_cacheKeyHasBeenSet(false),
    m_responseHeaderCacheHasBeenSet(false),
    m_videoSeekHasBeenSet(false),
    m_cacheHasBeenSet(false),
    m_originPullOptimizationHasBeenSet(false),
    m_httpsHasBeenSet(false),
    m_authenticationHasBeenSet(false),
    m_seoHasBeenSet(false),
    m_forceRedirectHasBeenSet(false),
    m_refererHasBeenSet(false),
    m_maxAgeHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_specificConfigHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_originPullTimeoutHasBeenSet(false),
    m_awsPrivateAccessHasBeenSet(false),
    m_userAgentFilterHasBeenSet(false),
    m_accessControlHasBeenSet(false),
    m_urlRedirectHasBeenSet(false),
    m_accessPortHasBeenSet(false),
    m_advancedAuthenticationHasBeenSet(false),
    m_originAuthenticationHasBeenSet(false),
    m_ipv6AccessHasBeenSet(false),
    m_offlineCacheHasBeenSet(false),
    m_originCombineHasBeenSet(false)
{
}

string UpdateDomainConfigRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_originHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Origin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_origin.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_ipFilterHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IpFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_ipFilter.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_ipFreqLimitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IpFreqLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_ipFreqLimit.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_statusCodeCacheHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StatusCodeCache";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_statusCodeCache.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_compressionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Compression";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_compression.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_bandwidthAlertHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BandwidthAlert";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_bandwidthAlert.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_rangeOriginPullHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RangeOriginPull";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_rangeOriginPull.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_followRedirectHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FollowRedirect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_followRedirect.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_errorPageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ErrorPage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_errorPage.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_requestHeaderHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RequestHeader";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_requestHeader.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_responseHeaderHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResponseHeader";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_responseHeader.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_downstreamCappingHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DownstreamCapping";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_downstreamCapping.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_cacheKeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CacheKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_cacheKey.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_responseHeaderCacheHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResponseHeaderCache";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_responseHeaderCache.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_videoSeekHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VideoSeek";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_videoSeek.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_cacheHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Cache";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_cache.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_originPullOptimizationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OriginPullOptimization";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_originPullOptimization.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_httpsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Https";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_https.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_authenticationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Authentication";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_authentication.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_seoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Seo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_seo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_forceRedirectHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ForceRedirect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_forceRedirect.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_refererHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Referer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_referer.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_maxAgeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxAge";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_maxAge.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_specificConfigHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SpecificConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_specificConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_areaHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_originPullTimeoutHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OriginPullTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_originPullTimeout.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_awsPrivateAccessHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AwsPrivateAccess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_awsPrivateAccess.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_userAgentFilterHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UserAgentFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_userAgentFilter.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_accessControlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccessControl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_accessControl.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_urlRedirectHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UrlRedirect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_urlRedirect.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_accessPortHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccessPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_accessPort.begin(); itr != m_accessPort.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetInt64(*itr), allocator);
        }
    }

    if (m_advancedAuthenticationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AdvancedAuthentication";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_advancedAuthentication.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_originAuthenticationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OriginAuthentication";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_originAuthentication.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_ipv6AccessHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Ipv6Access";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_ipv6Access.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_offlineCacheHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OfflineCache";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_offlineCache.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_originCombineHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OriginCombine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_originCombine.ToJsonObject(d[key.c_str()], allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateDomainConfigRequest::GetDomain() const
{
    return m_domain;
}

void UpdateDomainConfigRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool UpdateDomainConfigRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

int64_t UpdateDomainConfigRequest::GetProjectId() const
{
    return m_projectId;
}

void UpdateDomainConfigRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool UpdateDomainConfigRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

Origin UpdateDomainConfigRequest::GetOrigin() const
{
    return m_origin;
}

void UpdateDomainConfigRequest::SetOrigin(const Origin& _origin)
{
    m_origin = _origin;
    m_originHasBeenSet = true;
}

bool UpdateDomainConfigRequest::OriginHasBeenSet() const
{
    return m_originHasBeenSet;
}

IpFilter UpdateDomainConfigRequest::GetIpFilter() const
{
    return m_ipFilter;
}

void UpdateDomainConfigRequest::SetIpFilter(const IpFilter& _ipFilter)
{
    m_ipFilter = _ipFilter;
    m_ipFilterHasBeenSet = true;
}

bool UpdateDomainConfigRequest::IpFilterHasBeenSet() const
{
    return m_ipFilterHasBeenSet;
}

IpFreqLimit UpdateDomainConfigRequest::GetIpFreqLimit() const
{
    return m_ipFreqLimit;
}

void UpdateDomainConfigRequest::SetIpFreqLimit(const IpFreqLimit& _ipFreqLimit)
{
    m_ipFreqLimit = _ipFreqLimit;
    m_ipFreqLimitHasBeenSet = true;
}

bool UpdateDomainConfigRequest::IpFreqLimitHasBeenSet() const
{
    return m_ipFreqLimitHasBeenSet;
}

StatusCodeCache UpdateDomainConfigRequest::GetStatusCodeCache() const
{
    return m_statusCodeCache;
}

void UpdateDomainConfigRequest::SetStatusCodeCache(const StatusCodeCache& _statusCodeCache)
{
    m_statusCodeCache = _statusCodeCache;
    m_statusCodeCacheHasBeenSet = true;
}

bool UpdateDomainConfigRequest::StatusCodeCacheHasBeenSet() const
{
    return m_statusCodeCacheHasBeenSet;
}

Compression UpdateDomainConfigRequest::GetCompression() const
{
    return m_compression;
}

void UpdateDomainConfigRequest::SetCompression(const Compression& _compression)
{
    m_compression = _compression;
    m_compressionHasBeenSet = true;
}

bool UpdateDomainConfigRequest::CompressionHasBeenSet() const
{
    return m_compressionHasBeenSet;
}

BandwidthAlert UpdateDomainConfigRequest::GetBandwidthAlert() const
{
    return m_bandwidthAlert;
}

void UpdateDomainConfigRequest::SetBandwidthAlert(const BandwidthAlert& _bandwidthAlert)
{
    m_bandwidthAlert = _bandwidthAlert;
    m_bandwidthAlertHasBeenSet = true;
}

bool UpdateDomainConfigRequest::BandwidthAlertHasBeenSet() const
{
    return m_bandwidthAlertHasBeenSet;
}

RangeOriginPull UpdateDomainConfigRequest::GetRangeOriginPull() const
{
    return m_rangeOriginPull;
}

void UpdateDomainConfigRequest::SetRangeOriginPull(const RangeOriginPull& _rangeOriginPull)
{
    m_rangeOriginPull = _rangeOriginPull;
    m_rangeOriginPullHasBeenSet = true;
}

bool UpdateDomainConfigRequest::RangeOriginPullHasBeenSet() const
{
    return m_rangeOriginPullHasBeenSet;
}

FollowRedirect UpdateDomainConfigRequest::GetFollowRedirect() const
{
    return m_followRedirect;
}

void UpdateDomainConfigRequest::SetFollowRedirect(const FollowRedirect& _followRedirect)
{
    m_followRedirect = _followRedirect;
    m_followRedirectHasBeenSet = true;
}

bool UpdateDomainConfigRequest::FollowRedirectHasBeenSet() const
{
    return m_followRedirectHasBeenSet;
}

ErrorPage UpdateDomainConfigRequest::GetErrorPage() const
{
    return m_errorPage;
}

void UpdateDomainConfigRequest::SetErrorPage(const ErrorPage& _errorPage)
{
    m_errorPage = _errorPage;
    m_errorPageHasBeenSet = true;
}

bool UpdateDomainConfigRequest::ErrorPageHasBeenSet() const
{
    return m_errorPageHasBeenSet;
}

RequestHeader UpdateDomainConfigRequest::GetRequestHeader() const
{
    return m_requestHeader;
}

void UpdateDomainConfigRequest::SetRequestHeader(const RequestHeader& _requestHeader)
{
    m_requestHeader = _requestHeader;
    m_requestHeaderHasBeenSet = true;
}

bool UpdateDomainConfigRequest::RequestHeaderHasBeenSet() const
{
    return m_requestHeaderHasBeenSet;
}

ResponseHeader UpdateDomainConfigRequest::GetResponseHeader() const
{
    return m_responseHeader;
}

void UpdateDomainConfigRequest::SetResponseHeader(const ResponseHeader& _responseHeader)
{
    m_responseHeader = _responseHeader;
    m_responseHeaderHasBeenSet = true;
}

bool UpdateDomainConfigRequest::ResponseHeaderHasBeenSet() const
{
    return m_responseHeaderHasBeenSet;
}

DownstreamCapping UpdateDomainConfigRequest::GetDownstreamCapping() const
{
    return m_downstreamCapping;
}

void UpdateDomainConfigRequest::SetDownstreamCapping(const DownstreamCapping& _downstreamCapping)
{
    m_downstreamCapping = _downstreamCapping;
    m_downstreamCappingHasBeenSet = true;
}

bool UpdateDomainConfigRequest::DownstreamCappingHasBeenSet() const
{
    return m_downstreamCappingHasBeenSet;
}

CacheKey UpdateDomainConfigRequest::GetCacheKey() const
{
    return m_cacheKey;
}

void UpdateDomainConfigRequest::SetCacheKey(const CacheKey& _cacheKey)
{
    m_cacheKey = _cacheKey;
    m_cacheKeyHasBeenSet = true;
}

bool UpdateDomainConfigRequest::CacheKeyHasBeenSet() const
{
    return m_cacheKeyHasBeenSet;
}

ResponseHeaderCache UpdateDomainConfigRequest::GetResponseHeaderCache() const
{
    return m_responseHeaderCache;
}

void UpdateDomainConfigRequest::SetResponseHeaderCache(const ResponseHeaderCache& _responseHeaderCache)
{
    m_responseHeaderCache = _responseHeaderCache;
    m_responseHeaderCacheHasBeenSet = true;
}

bool UpdateDomainConfigRequest::ResponseHeaderCacheHasBeenSet() const
{
    return m_responseHeaderCacheHasBeenSet;
}

VideoSeek UpdateDomainConfigRequest::GetVideoSeek() const
{
    return m_videoSeek;
}

void UpdateDomainConfigRequest::SetVideoSeek(const VideoSeek& _videoSeek)
{
    m_videoSeek = _videoSeek;
    m_videoSeekHasBeenSet = true;
}

bool UpdateDomainConfigRequest::VideoSeekHasBeenSet() const
{
    return m_videoSeekHasBeenSet;
}

Cache UpdateDomainConfigRequest::GetCache() const
{
    return m_cache;
}

void UpdateDomainConfigRequest::SetCache(const Cache& _cache)
{
    m_cache = _cache;
    m_cacheHasBeenSet = true;
}

bool UpdateDomainConfigRequest::CacheHasBeenSet() const
{
    return m_cacheHasBeenSet;
}

OriginPullOptimization UpdateDomainConfigRequest::GetOriginPullOptimization() const
{
    return m_originPullOptimization;
}

void UpdateDomainConfigRequest::SetOriginPullOptimization(const OriginPullOptimization& _originPullOptimization)
{
    m_originPullOptimization = _originPullOptimization;
    m_originPullOptimizationHasBeenSet = true;
}

bool UpdateDomainConfigRequest::OriginPullOptimizationHasBeenSet() const
{
    return m_originPullOptimizationHasBeenSet;
}

Https UpdateDomainConfigRequest::GetHttps() const
{
    return m_https;
}

void UpdateDomainConfigRequest::SetHttps(const Https& _https)
{
    m_https = _https;
    m_httpsHasBeenSet = true;
}

bool UpdateDomainConfigRequest::HttpsHasBeenSet() const
{
    return m_httpsHasBeenSet;
}

Authentication UpdateDomainConfigRequest::GetAuthentication() const
{
    return m_authentication;
}

void UpdateDomainConfigRequest::SetAuthentication(const Authentication& _authentication)
{
    m_authentication = _authentication;
    m_authenticationHasBeenSet = true;
}

bool UpdateDomainConfigRequest::AuthenticationHasBeenSet() const
{
    return m_authenticationHasBeenSet;
}

Seo UpdateDomainConfigRequest::GetSeo() const
{
    return m_seo;
}

void UpdateDomainConfigRequest::SetSeo(const Seo& _seo)
{
    m_seo = _seo;
    m_seoHasBeenSet = true;
}

bool UpdateDomainConfigRequest::SeoHasBeenSet() const
{
    return m_seoHasBeenSet;
}

ForceRedirect UpdateDomainConfigRequest::GetForceRedirect() const
{
    return m_forceRedirect;
}

void UpdateDomainConfigRequest::SetForceRedirect(const ForceRedirect& _forceRedirect)
{
    m_forceRedirect = _forceRedirect;
    m_forceRedirectHasBeenSet = true;
}

bool UpdateDomainConfigRequest::ForceRedirectHasBeenSet() const
{
    return m_forceRedirectHasBeenSet;
}

Referer UpdateDomainConfigRequest::GetReferer() const
{
    return m_referer;
}

void UpdateDomainConfigRequest::SetReferer(const Referer& _referer)
{
    m_referer = _referer;
    m_refererHasBeenSet = true;
}

bool UpdateDomainConfigRequest::RefererHasBeenSet() const
{
    return m_refererHasBeenSet;
}

MaxAge UpdateDomainConfigRequest::GetMaxAge() const
{
    return m_maxAge;
}

void UpdateDomainConfigRequest::SetMaxAge(const MaxAge& _maxAge)
{
    m_maxAge = _maxAge;
    m_maxAgeHasBeenSet = true;
}

bool UpdateDomainConfigRequest::MaxAgeHasBeenSet() const
{
    return m_maxAgeHasBeenSet;
}

string UpdateDomainConfigRequest::GetServiceType() const
{
    return m_serviceType;
}

void UpdateDomainConfigRequest::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool UpdateDomainConfigRequest::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

SpecificConfig UpdateDomainConfigRequest::GetSpecificConfig() const
{
    return m_specificConfig;
}

void UpdateDomainConfigRequest::SetSpecificConfig(const SpecificConfig& _specificConfig)
{
    m_specificConfig = _specificConfig;
    m_specificConfigHasBeenSet = true;
}

bool UpdateDomainConfigRequest::SpecificConfigHasBeenSet() const
{
    return m_specificConfigHasBeenSet;
}

string UpdateDomainConfigRequest::GetArea() const
{
    return m_area;
}

void UpdateDomainConfigRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool UpdateDomainConfigRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

OriginPullTimeout UpdateDomainConfigRequest::GetOriginPullTimeout() const
{
    return m_originPullTimeout;
}

void UpdateDomainConfigRequest::SetOriginPullTimeout(const OriginPullTimeout& _originPullTimeout)
{
    m_originPullTimeout = _originPullTimeout;
    m_originPullTimeoutHasBeenSet = true;
}

bool UpdateDomainConfigRequest::OriginPullTimeoutHasBeenSet() const
{
    return m_originPullTimeoutHasBeenSet;
}

AwsPrivateAccess UpdateDomainConfigRequest::GetAwsPrivateAccess() const
{
    return m_awsPrivateAccess;
}

void UpdateDomainConfigRequest::SetAwsPrivateAccess(const AwsPrivateAccess& _awsPrivateAccess)
{
    m_awsPrivateAccess = _awsPrivateAccess;
    m_awsPrivateAccessHasBeenSet = true;
}

bool UpdateDomainConfigRequest::AwsPrivateAccessHasBeenSet() const
{
    return m_awsPrivateAccessHasBeenSet;
}

UserAgentFilter UpdateDomainConfigRequest::GetUserAgentFilter() const
{
    return m_userAgentFilter;
}

void UpdateDomainConfigRequest::SetUserAgentFilter(const UserAgentFilter& _userAgentFilter)
{
    m_userAgentFilter = _userAgentFilter;
    m_userAgentFilterHasBeenSet = true;
}

bool UpdateDomainConfigRequest::UserAgentFilterHasBeenSet() const
{
    return m_userAgentFilterHasBeenSet;
}

AccessControl UpdateDomainConfigRequest::GetAccessControl() const
{
    return m_accessControl;
}

void UpdateDomainConfigRequest::SetAccessControl(const AccessControl& _accessControl)
{
    m_accessControl = _accessControl;
    m_accessControlHasBeenSet = true;
}

bool UpdateDomainConfigRequest::AccessControlHasBeenSet() const
{
    return m_accessControlHasBeenSet;
}

UrlRedirect UpdateDomainConfigRequest::GetUrlRedirect() const
{
    return m_urlRedirect;
}

void UpdateDomainConfigRequest::SetUrlRedirect(const UrlRedirect& _urlRedirect)
{
    m_urlRedirect = _urlRedirect;
    m_urlRedirectHasBeenSet = true;
}

bool UpdateDomainConfigRequest::UrlRedirectHasBeenSet() const
{
    return m_urlRedirectHasBeenSet;
}

vector<int64_t> UpdateDomainConfigRequest::GetAccessPort() const
{
    return m_accessPort;
}

void UpdateDomainConfigRequest::SetAccessPort(const vector<int64_t>& _accessPort)
{
    m_accessPort = _accessPort;
    m_accessPortHasBeenSet = true;
}

bool UpdateDomainConfigRequest::AccessPortHasBeenSet() const
{
    return m_accessPortHasBeenSet;
}

AdvancedAuthentication UpdateDomainConfigRequest::GetAdvancedAuthentication() const
{
    return m_advancedAuthentication;
}

void UpdateDomainConfigRequest::SetAdvancedAuthentication(const AdvancedAuthentication& _advancedAuthentication)
{
    m_advancedAuthentication = _advancedAuthentication;
    m_advancedAuthenticationHasBeenSet = true;
}

bool UpdateDomainConfigRequest::AdvancedAuthenticationHasBeenSet() const
{
    return m_advancedAuthenticationHasBeenSet;
}

OriginAuthentication UpdateDomainConfigRequest::GetOriginAuthentication() const
{
    return m_originAuthentication;
}

void UpdateDomainConfigRequest::SetOriginAuthentication(const OriginAuthentication& _originAuthentication)
{
    m_originAuthentication = _originAuthentication;
    m_originAuthenticationHasBeenSet = true;
}

bool UpdateDomainConfigRequest::OriginAuthenticationHasBeenSet() const
{
    return m_originAuthenticationHasBeenSet;
}

Ipv6Access UpdateDomainConfigRequest::GetIpv6Access() const
{
    return m_ipv6Access;
}

void UpdateDomainConfigRequest::SetIpv6Access(const Ipv6Access& _ipv6Access)
{
    m_ipv6Access = _ipv6Access;
    m_ipv6AccessHasBeenSet = true;
}

bool UpdateDomainConfigRequest::Ipv6AccessHasBeenSet() const
{
    return m_ipv6AccessHasBeenSet;
}

OfflineCache UpdateDomainConfigRequest::GetOfflineCache() const
{
    return m_offlineCache;
}

void UpdateDomainConfigRequest::SetOfflineCache(const OfflineCache& _offlineCache)
{
    m_offlineCache = _offlineCache;
    m_offlineCacheHasBeenSet = true;
}

bool UpdateDomainConfigRequest::OfflineCacheHasBeenSet() const
{
    return m_offlineCacheHasBeenSet;
}

OriginCombine UpdateDomainConfigRequest::GetOriginCombine() const
{
    return m_originCombine;
}

void UpdateDomainConfigRequest::SetOriginCombine(const OriginCombine& _originCombine)
{
    m_originCombine = _originCombine;
    m_originCombineHasBeenSet = true;
}

bool UpdateDomainConfigRequest::OriginCombineHasBeenSet() const
{
    return m_originCombineHasBeenSet;
}


