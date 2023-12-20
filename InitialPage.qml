import QtQuick 2.9
import QtQuick.Controls 2.5
import QtQuick.Layouts 1.3
import QtQuick.Dialogs


Item {
    id: initialPage
    property alias inputText: textField.text
        Rectangle {
            id: rect1
            color: "#D8D8D8"
            height: parent.height
            width: parent.width

            Image {
                source: "logo.png"
                anchors.horizontalCenter: parent.horizontalCenter
            }

            Text {
                id: mainHeading
                text: "FEC Encoding Detector"
                font.pixelSize: 96/2
                color: "#415861"
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.verticalCenter: parent.verticalCenter
                anchors.verticalCenterOffset: -50 * 2 // Adjust this value as needed
            }

            Item {
                // spacer item
                id: spacer1
                anchors.top: mainHeading.bottom
                width: parent.width
                height: 30
                Rectangle { anchors.fill: parent; color: "#D8D8D8" } // to visualize the spacer
                }

                TextField {
                    id: textField
                    color: "#1E1A1D"
                    placeholderText: "Enter a Message String"
                    placeholderTextColor: "#333"
                    onTextChanged: window.inputText = text
                    anchors.top: spacer1.bottom
                    anchors.horizontalCenter: parent.horizontalCenter
                    anchors.verticalCenterOffset: 50  // Adjust this value as needed
                    background: Rectangle {
                        radius: 5
                        implicitWidth: (100) * 8
                        implicitHeight: (24) * 4
                        color: "#C7D3BF"
                    }
                    font.pixelSize: 26 // Increase the pixel size to increase the text size
                }

                Item {
                    // spacer item
                    id: spacer2
                    anchors.top: textField.bottom
                    width: parent.width
                    height: 30
                    Rectangle { anchors.fill: parent; color: "#D8D8D8" } // to visualize the spacer
                    }

                    RowLayout {
                        id: buttonGroup
                        anchors.horizontalCenter: parent.horizontalCenter
                        anchors.top: spacer2.bottom
                        spacing: 40

                        AnalysisButton {
                            id: analysisButton
                            anchors.topMargin: 10
                            buttonText: "Analyse Message"
                            Layout.topMargin: 10
                            imageSource: "newAnalyse.png"
                            uploadFlag: 0
                            color: "#D2747B"
                        }

                        TextField {
                            text: "OR"
                            color: "#1E1A1D"
                            font.pixelSize: 15
                            background: Rectangle {
                                radius: 5
                                color: "#D8D8D8"
                            }

                        }

                        AnalysisButton {
                            id: uploadButton
                            anchors.leftMargin: 10
                            color: "#F26822"
                            buttonText: "Upload a file"
                            Layout.topMargin: 10
                            imageSource: "newUpload.png"
                            uploadFlag: 1
                        }
                    }
                }
            }