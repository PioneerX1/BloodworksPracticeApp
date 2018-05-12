//
//  ViewController.h
//  BloodioWorks
//
//  Created by Mick Sexton on 5/5/18.
//  Copyright © 2018 Mick Sexton. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AudioToolbox/AudioToolbox.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController {
    SystemSoundID SoundID;
    AVAudioPlayer *avSound;
    //NSError audioError;
    
}

- (IBAction)PlayAudio:(id)sender;



@end

