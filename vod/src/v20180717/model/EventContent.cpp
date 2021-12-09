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

#include <tencentcloud/vod/v20180717/model/EventContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

EventContent::EventContent() :
    m_eventHandleHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_fileUploadEventHasBeenSet(false),
    m_procedureStateChangeEventHasBeenSet(false),
    m_fileDeleteEventHasBeenSet(false),
    m_pullCompleteEventHasBeenSet(false),
    m_editMediaCompleteEventHasBeenSet(false),
    m_splitMediaCompleteEventHasBeenSet(false),
    m_composeMediaCompleteEventHasBeenSet(false),
    m_clipCompleteEventHasBeenSet(false),
    m_transcodeCompleteEventHasBeenSet(false),
    m_createImageSpriteCompleteEventHasBeenSet(false),
    m_concatCompleteEventHasBeenSet(false),
    m_snapshotByTimeOffsetCompleteEventHasBeenSet(false),
    m_wechatPublishCompleteEventHasBeenSet(false),
    m_wechatMiniProgramPublishCompleteEventHasBeenSet(false),
    m_restoreMediaCompleteEventHasBeenSet(false)
{
}

CoreInternalOutcome EventContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventHandle") && !value["EventHandle"].IsNull())
    {
        if (!value["EventHandle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventContent.EventHandle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventHandle = string(value["EventHandle"].GetString());
        m_eventHandleHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventContent.EventType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = string(value["EventType"].GetString());
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("FileUploadEvent") && !value["FileUploadEvent"].IsNull())
    {
        if (!value["FileUploadEvent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventContent.FileUploadEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fileUploadEvent.Deserialize(value["FileUploadEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fileUploadEventHasBeenSet = true;
    }

    if (value.HasMember("ProcedureStateChangeEvent") && !value["ProcedureStateChangeEvent"].IsNull())
    {
        if (!value["ProcedureStateChangeEvent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventContent.ProcedureStateChangeEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_procedureStateChangeEvent.Deserialize(value["ProcedureStateChangeEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_procedureStateChangeEventHasBeenSet = true;
    }

    if (value.HasMember("FileDeleteEvent") && !value["FileDeleteEvent"].IsNull())
    {
        if (!value["FileDeleteEvent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventContent.FileDeleteEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fileDeleteEvent.Deserialize(value["FileDeleteEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fileDeleteEventHasBeenSet = true;
    }

    if (value.HasMember("PullCompleteEvent") && !value["PullCompleteEvent"].IsNull())
    {
        if (!value["PullCompleteEvent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventContent.PullCompleteEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pullCompleteEvent.Deserialize(value["PullCompleteEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pullCompleteEventHasBeenSet = true;
    }

    if (value.HasMember("EditMediaCompleteEvent") && !value["EditMediaCompleteEvent"].IsNull())
    {
        if (!value["EditMediaCompleteEvent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventContent.EditMediaCompleteEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_editMediaCompleteEvent.Deserialize(value["EditMediaCompleteEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_editMediaCompleteEventHasBeenSet = true;
    }

    if (value.HasMember("SplitMediaCompleteEvent") && !value["SplitMediaCompleteEvent"].IsNull())
    {
        if (!value["SplitMediaCompleteEvent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventContent.SplitMediaCompleteEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_splitMediaCompleteEvent.Deserialize(value["SplitMediaCompleteEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_splitMediaCompleteEventHasBeenSet = true;
    }

    if (value.HasMember("ComposeMediaCompleteEvent") && !value["ComposeMediaCompleteEvent"].IsNull())
    {
        if (!value["ComposeMediaCompleteEvent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventContent.ComposeMediaCompleteEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_composeMediaCompleteEvent.Deserialize(value["ComposeMediaCompleteEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_composeMediaCompleteEventHasBeenSet = true;
    }

    if (value.HasMember("ClipCompleteEvent") && !value["ClipCompleteEvent"].IsNull())
    {
        if (!value["ClipCompleteEvent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventContent.ClipCompleteEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clipCompleteEvent.Deserialize(value["ClipCompleteEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clipCompleteEventHasBeenSet = true;
    }

    if (value.HasMember("TranscodeCompleteEvent") && !value["TranscodeCompleteEvent"].IsNull())
    {
        if (!value["TranscodeCompleteEvent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventContent.TranscodeCompleteEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_transcodeCompleteEvent.Deserialize(value["TranscodeCompleteEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_transcodeCompleteEventHasBeenSet = true;
    }

    if (value.HasMember("CreateImageSpriteCompleteEvent") && !value["CreateImageSpriteCompleteEvent"].IsNull())
    {
        if (!value["CreateImageSpriteCompleteEvent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventContent.CreateImageSpriteCompleteEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_createImageSpriteCompleteEvent.Deserialize(value["CreateImageSpriteCompleteEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_createImageSpriteCompleteEventHasBeenSet = true;
    }

    if (value.HasMember("ConcatCompleteEvent") && !value["ConcatCompleteEvent"].IsNull())
    {
        if (!value["ConcatCompleteEvent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventContent.ConcatCompleteEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_concatCompleteEvent.Deserialize(value["ConcatCompleteEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_concatCompleteEventHasBeenSet = true;
    }

    if (value.HasMember("SnapshotByTimeOffsetCompleteEvent") && !value["SnapshotByTimeOffsetCompleteEvent"].IsNull())
    {
        if (!value["SnapshotByTimeOffsetCompleteEvent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventContent.SnapshotByTimeOffsetCompleteEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_snapshotByTimeOffsetCompleteEvent.Deserialize(value["SnapshotByTimeOffsetCompleteEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_snapshotByTimeOffsetCompleteEventHasBeenSet = true;
    }

    if (value.HasMember("WechatPublishCompleteEvent") && !value["WechatPublishCompleteEvent"].IsNull())
    {
        if (!value["WechatPublishCompleteEvent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventContent.WechatPublishCompleteEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_wechatPublishCompleteEvent.Deserialize(value["WechatPublishCompleteEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_wechatPublishCompleteEventHasBeenSet = true;
    }

    if (value.HasMember("WechatMiniProgramPublishCompleteEvent") && !value["WechatMiniProgramPublishCompleteEvent"].IsNull())
    {
        if (!value["WechatMiniProgramPublishCompleteEvent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventContent.WechatMiniProgramPublishCompleteEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_wechatMiniProgramPublishCompleteEvent.Deserialize(value["WechatMiniProgramPublishCompleteEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_wechatMiniProgramPublishCompleteEventHasBeenSet = true;
    }

    if (value.HasMember("RestoreMediaCompleteEvent") && !value["RestoreMediaCompleteEvent"].IsNull())
    {
        if (!value["RestoreMediaCompleteEvent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventContent.RestoreMediaCompleteEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_restoreMediaCompleteEvent.Deserialize(value["RestoreMediaCompleteEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_restoreMediaCompleteEventHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventHandleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventHandle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventHandle.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileUploadEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileUploadEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fileUploadEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_procedureStateChangeEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcedureStateChangeEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_procedureStateChangeEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fileDeleteEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileDeleteEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fileDeleteEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pullCompleteEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PullCompleteEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pullCompleteEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_editMediaCompleteEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EditMediaCompleteEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_editMediaCompleteEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_splitMediaCompleteEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SplitMediaCompleteEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_splitMediaCompleteEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_composeMediaCompleteEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComposeMediaCompleteEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_composeMediaCompleteEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clipCompleteEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClipCompleteEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clipCompleteEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_transcodeCompleteEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranscodeCompleteEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_transcodeCompleteEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createImageSpriteCompleteEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateImageSpriteCompleteEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_createImageSpriteCompleteEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_concatCompleteEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConcatCompleteEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_concatCompleteEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_snapshotByTimeOffsetCompleteEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotByTimeOffsetCompleteEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_snapshotByTimeOffsetCompleteEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_wechatPublishCompleteEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WechatPublishCompleteEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_wechatPublishCompleteEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_wechatMiniProgramPublishCompleteEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WechatMiniProgramPublishCompleteEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_wechatMiniProgramPublishCompleteEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_restoreMediaCompleteEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestoreMediaCompleteEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_restoreMediaCompleteEvent.ToJsonObject(value[key.c_str()], allocator);
    }

}


string EventContent::GetEventHandle() const
{
    return m_eventHandle;
}

void EventContent::SetEventHandle(const string& _eventHandle)
{
    m_eventHandle = _eventHandle;
    m_eventHandleHasBeenSet = true;
}

bool EventContent::EventHandleHasBeenSet() const
{
    return m_eventHandleHasBeenSet;
}

string EventContent::GetEventType() const
{
    return m_eventType;
}

void EventContent::SetEventType(const string& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool EventContent::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

FileUploadTask EventContent::GetFileUploadEvent() const
{
    return m_fileUploadEvent;
}

void EventContent::SetFileUploadEvent(const FileUploadTask& _fileUploadEvent)
{
    m_fileUploadEvent = _fileUploadEvent;
    m_fileUploadEventHasBeenSet = true;
}

bool EventContent::FileUploadEventHasBeenSet() const
{
    return m_fileUploadEventHasBeenSet;
}

ProcedureTask EventContent::GetProcedureStateChangeEvent() const
{
    return m_procedureStateChangeEvent;
}

void EventContent::SetProcedureStateChangeEvent(const ProcedureTask& _procedureStateChangeEvent)
{
    m_procedureStateChangeEvent = _procedureStateChangeEvent;
    m_procedureStateChangeEventHasBeenSet = true;
}

bool EventContent::ProcedureStateChangeEventHasBeenSet() const
{
    return m_procedureStateChangeEventHasBeenSet;
}

FileDeleteTask EventContent::GetFileDeleteEvent() const
{
    return m_fileDeleteEvent;
}

void EventContent::SetFileDeleteEvent(const FileDeleteTask& _fileDeleteEvent)
{
    m_fileDeleteEvent = _fileDeleteEvent;
    m_fileDeleteEventHasBeenSet = true;
}

bool EventContent::FileDeleteEventHasBeenSet() const
{
    return m_fileDeleteEventHasBeenSet;
}

PullUploadTask EventContent::GetPullCompleteEvent() const
{
    return m_pullCompleteEvent;
}

void EventContent::SetPullCompleteEvent(const PullUploadTask& _pullCompleteEvent)
{
    m_pullCompleteEvent = _pullCompleteEvent;
    m_pullCompleteEventHasBeenSet = true;
}

bool EventContent::PullCompleteEventHasBeenSet() const
{
    return m_pullCompleteEventHasBeenSet;
}

EditMediaTask EventContent::GetEditMediaCompleteEvent() const
{
    return m_editMediaCompleteEvent;
}

void EventContent::SetEditMediaCompleteEvent(const EditMediaTask& _editMediaCompleteEvent)
{
    m_editMediaCompleteEvent = _editMediaCompleteEvent;
    m_editMediaCompleteEventHasBeenSet = true;
}

bool EventContent::EditMediaCompleteEventHasBeenSet() const
{
    return m_editMediaCompleteEventHasBeenSet;
}

SplitMediaTask EventContent::GetSplitMediaCompleteEvent() const
{
    return m_splitMediaCompleteEvent;
}

void EventContent::SetSplitMediaCompleteEvent(const SplitMediaTask& _splitMediaCompleteEvent)
{
    m_splitMediaCompleteEvent = _splitMediaCompleteEvent;
    m_splitMediaCompleteEventHasBeenSet = true;
}

bool EventContent::SplitMediaCompleteEventHasBeenSet() const
{
    return m_splitMediaCompleteEventHasBeenSet;
}

ComposeMediaTask EventContent::GetComposeMediaCompleteEvent() const
{
    return m_composeMediaCompleteEvent;
}

void EventContent::SetComposeMediaCompleteEvent(const ComposeMediaTask& _composeMediaCompleteEvent)
{
    m_composeMediaCompleteEvent = _composeMediaCompleteEvent;
    m_composeMediaCompleteEventHasBeenSet = true;
}

bool EventContent::ComposeMediaCompleteEventHasBeenSet() const
{
    return m_composeMediaCompleteEventHasBeenSet;
}

ClipTask2017 EventContent::GetClipCompleteEvent() const
{
    return m_clipCompleteEvent;
}

void EventContent::SetClipCompleteEvent(const ClipTask2017& _clipCompleteEvent)
{
    m_clipCompleteEvent = _clipCompleteEvent;
    m_clipCompleteEventHasBeenSet = true;
}

bool EventContent::ClipCompleteEventHasBeenSet() const
{
    return m_clipCompleteEventHasBeenSet;
}

TranscodeTask2017 EventContent::GetTranscodeCompleteEvent() const
{
    return m_transcodeCompleteEvent;
}

void EventContent::SetTranscodeCompleteEvent(const TranscodeTask2017& _transcodeCompleteEvent)
{
    m_transcodeCompleteEvent = _transcodeCompleteEvent;
    m_transcodeCompleteEventHasBeenSet = true;
}

bool EventContent::TranscodeCompleteEventHasBeenSet() const
{
    return m_transcodeCompleteEventHasBeenSet;
}

CreateImageSpriteTask2017 EventContent::GetCreateImageSpriteCompleteEvent() const
{
    return m_createImageSpriteCompleteEvent;
}

void EventContent::SetCreateImageSpriteCompleteEvent(const CreateImageSpriteTask2017& _createImageSpriteCompleteEvent)
{
    m_createImageSpriteCompleteEvent = _createImageSpriteCompleteEvent;
    m_createImageSpriteCompleteEventHasBeenSet = true;
}

bool EventContent::CreateImageSpriteCompleteEventHasBeenSet() const
{
    return m_createImageSpriteCompleteEventHasBeenSet;
}

ConcatTask2017 EventContent::GetConcatCompleteEvent() const
{
    return m_concatCompleteEvent;
}

void EventContent::SetConcatCompleteEvent(const ConcatTask2017& _concatCompleteEvent)
{
    m_concatCompleteEvent = _concatCompleteEvent;
    m_concatCompleteEventHasBeenSet = true;
}

bool EventContent::ConcatCompleteEventHasBeenSet() const
{
    return m_concatCompleteEventHasBeenSet;
}

SnapshotByTimeOffsetTask2017 EventContent::GetSnapshotByTimeOffsetCompleteEvent() const
{
    return m_snapshotByTimeOffsetCompleteEvent;
}

void EventContent::SetSnapshotByTimeOffsetCompleteEvent(const SnapshotByTimeOffsetTask2017& _snapshotByTimeOffsetCompleteEvent)
{
    m_snapshotByTimeOffsetCompleteEvent = _snapshotByTimeOffsetCompleteEvent;
    m_snapshotByTimeOffsetCompleteEventHasBeenSet = true;
}

bool EventContent::SnapshotByTimeOffsetCompleteEventHasBeenSet() const
{
    return m_snapshotByTimeOffsetCompleteEventHasBeenSet;
}

WechatPublishTask EventContent::GetWechatPublishCompleteEvent() const
{
    return m_wechatPublishCompleteEvent;
}

void EventContent::SetWechatPublishCompleteEvent(const WechatPublishTask& _wechatPublishCompleteEvent)
{
    m_wechatPublishCompleteEvent = _wechatPublishCompleteEvent;
    m_wechatPublishCompleteEventHasBeenSet = true;
}

bool EventContent::WechatPublishCompleteEventHasBeenSet() const
{
    return m_wechatPublishCompleteEventHasBeenSet;
}

WechatMiniProgramPublishTask EventContent::GetWechatMiniProgramPublishCompleteEvent() const
{
    return m_wechatMiniProgramPublishCompleteEvent;
}

void EventContent::SetWechatMiniProgramPublishCompleteEvent(const WechatMiniProgramPublishTask& _wechatMiniProgramPublishCompleteEvent)
{
    m_wechatMiniProgramPublishCompleteEvent = _wechatMiniProgramPublishCompleteEvent;
    m_wechatMiniProgramPublishCompleteEventHasBeenSet = true;
}

bool EventContent::WechatMiniProgramPublishCompleteEventHasBeenSet() const
{
    return m_wechatMiniProgramPublishCompleteEventHasBeenSet;
}

RestoreMediaTask EventContent::GetRestoreMediaCompleteEvent() const
{
    return m_restoreMediaCompleteEvent;
}

void EventContent::SetRestoreMediaCompleteEvent(const RestoreMediaTask& _restoreMediaCompleteEvent)
{
    m_restoreMediaCompleteEvent = _restoreMediaCompleteEvent;
    m_restoreMediaCompleteEventHasBeenSet = true;
}

bool EventContent::RestoreMediaCompleteEventHasBeenSet() const
{
    return m_restoreMediaCompleteEventHasBeenSet;
}

